/* Faça um programa que crie uma lista L com números
inteiros:

- A lista deve estar ordenada de maneira crescente
- Crie uma função para Inserir Elementos
    void insere (&L, elem)
- Crie uma função para Remover Elementos
    void remove (&L, elem)
- Crie uma função para Buscar Elementos
    int busca (&L, elem, &pos) */

#include <stdio.h>
#define MAX 10

struct LISTA {
int dado[MAX];
int total;
};

typedef struct LISTA lista;

int buscaSeq(lista *L, int elem, int *pos){
  int i=0;
  while(i < L->total && elem > L->dado[i]){
    i++;
  }
  (*pos) = i;

  if(elem==L->dado[i])
      return 1;
  
  else
    if(L->total==i)
      return 0;
    else
      return 0;
}

// método de busca binária
int busca(lista *L, int elem, int *pos){
  int inicio=0, meio, fim=L->total;
  meio = (inicio+fim)/2;

  while(L->dado[meio] != elem && inicio<=fim){
    if (L->dado[meio] > elem){
      fim = meio-1;
      (*pos) = meio;
    }
    else{
      inicio = meio+1;
      (*pos) = inicio;
    }
    meio = (inicio + fim)/2;
  }

  if(elem==L->dado[meio]){
      (*pos) = meio;
      return 1;
  }
  
  else
      return 0;
}

void insereElem(lista *L, int n){
  int pos, i;
  if (!busca(L, n, &pos)){
    for(i=L->total; i>pos; i--){
      L->dado[i] = L->dado[i-1];
    }
    L->dado[i] = n;
    L->total++;
  }
  else
    printf("Elemento já existe na lista!\n");
}

void removeElem(lista *L, int n){
  int pos, i;
  if (busca(L, n, &pos)){
    for(i=pos; i<L->total-1; i++){
      L->dado[i] = L->dado[i+1];
    }
    L->total--;
  }
  else
    printf("Elemento não existe na lista!\n");
}


void imprimeLista(lista *L){
  int i;
  for(i=0; i < L->total; i++){
    printf("[%d]: %d\n", i, L->dado[i]);
  }
}
int a11ex1(void){
  lista L;
  int N, i, num;
  L.total = 0;

  printf("\n\nDigite a quantidade de elementos que deseja inserir: ");
  scanf("%d", &N);

  for (i=0; i<N; i++){
    printf("Digite o número para inserir: ");
    scanf("%d", &num);
    insereElem(&L, num);
  }

  printf("\n\nESTADO DA LISTA\n\n");
  imprimeLista(&L);

  printf("Digite a quantidade de elementos que deseja remover: ");
  scanf("%d", &N);

  for (i=0; i<N; i++){
    printf("Digite o número para remover: ");
    scanf("%d", &num);
    removeElem(&L, num);
  }

  printf("\n\nESTADO DA LISTA\n\n");
  imprimeLista(&L);
  return 0;
}