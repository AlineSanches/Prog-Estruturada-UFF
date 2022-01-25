/* Crie 2 listas L1 e L2 (com nós cabeça) de números inteiros que
representarão conjuntos matemáticos. As listas devem ser preenchidas até que o usuário digite um número negativo.
- Não podem possuir números repetidos
- Os conjuntos não precisam estar ordenados
- Devem ser criadas as funções insereElem e buscaElem
A função insereElem não deve incluir os elementos ordenadamente, podem ser inseridos sempre no início
Crie o seguinte MENU para o usuário e implemente funções para cada item
  1 - Mostra L1 e L2
  2 - Interseção de L1 e L2
  3 - União de L1 e L2
  4 - Fim do programa */

#include <stdio.h>
#include <stdlib.h>


struct NO {
  int info;
  struct NO *prox;
}; typedef struct NO lista;

int buscaEx2(lista *L, int elem){
  lista *aux;
  aux = L->prox;
  while (aux != NULL) {
    if (elem == aux->info)
      return 1;
    aux = aux->prox;
    }
    return 0;
}

void insereEx2(lista *L, int elem) {
  lista *el;

  if (!buscaEx2(L,elem)) {
    el = (lista *)malloc(sizeof(lista));
    el->info = elem;
    el->prox = L->prox;
    L->prox = el;
  }
  else
    printf("Elemento já existe!\n");
}

void preencheLista(lista *L){
  int elem;

  printf("Digite o número que deseja inserir: ");
  scanf("%d", &elem);

  while(elem >= 0){
    insereEx2(L, elem);
    printf("Digite o número que deseja inserir: ");
    scanf("%d", &elem);
  }
}

void insterseccaoListas(lista *L1, lista *L2){
  int elem;

  while (L1 != NULL){
    elem = L1->info;
    if (buscaEx2(L2, elem))
      printf("%d -> ", elem);
  
    L1 = L1->prox;
  }
}

void uniaoListas(lista *L1, lista *L2){
  lista *aux;
  aux = L1->prox;
  while (aux != NULL){
    printf("%d -> ", aux->info);
    aux = aux->prox;
  }

  L2 = L2->prox;
  while (L2 != NULL){
    if (!buscaEx2(L1, L2->info))
      printf("%d -> ", L2->info);
  
    L2 = L2->prox;
  }
}

void mostraListaEx2(lista *L){
  while (L != NULL){
    printf("%d -> ", L->info);
    L = L->prox;
  }
}

int menuEx2(){
  int op;
  printf("\n\n----- MENU -----\n");
  printf("1 – Mostra L1 e L2\n");
  printf("2 – Interseção de L1 e L2\n");
  printf("3 – União de L1 e L2\n");
  printf("4 – Fim do programa\n");

  printf("Digite a operação: ");
  scanf("%d", &op);
  return op;
}

int a14ex2(void){
  lista *L1, *L2, *L3;
  int elem, op, qtd;

  L1 = (lista*) malloc(sizeof(lista));
  L1->prox = NULL;
  L2 = (lista*) malloc(sizeof(lista));
  L2->prox = NULL;

  printf("Preenchendo a lista L1:\n");
  preencheLista(L1);
  printf("\nPreenchendo a lista L2:\n");
  preencheLista(L2);

  op = menuEx2();

  while (op!=4){
    switch(op){
      case 1:
        printf("\nImprimindo a lista L1:\n");
        mostraListaEx2(L1->prox);
        printf("\nImprimindo a lista L2:\n");
        mostraListaEx2(L2->prox);
        break;
      case 2:
        printf("\nIntersecção de L1 e L2 = ");
        insterseccaoListas(L1, L2);
        break;
      case 3:
        printf("\nUnião de L1 e L2 = ");
        uniaoListas(L1, L2);
        break;
      default:
        printf("Operação não existe!");
    }
    op = menuEx2();
  }

  return 0;
} 