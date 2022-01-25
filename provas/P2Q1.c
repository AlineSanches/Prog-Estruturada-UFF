#include <stdio.h>
#include <stdlib.h>

struct NO {
  int info;
  struct NO *prox;
}; typedef struct NO lista;

lista *insereElem(lista *L, int elem, int *rep) {
	lista *el, *aux, *pre;
  int achou=0;

  aux = L;
  while (aux != NULL && !achou){
    if (aux->info == elem){
      achou = 1;
    }
    pre = aux;
    aux = aux->prox;
  }

	if (!achou) {
    el = (lista *)malloc(sizeof(lista));
    el->info = elem;
    if (L == NULL) {
      el->prox = L;
      L = el;
    }
    else if (elem%2==0){
      el->prox = pre->prox;
      pre->prox = el;
    }

    else if (elem%2!=0){
      el->prox = L;
      L = el;
    }
  }
  else{
    *rep = 1;
    printf("Este elemento já foi inserido nesta lista!!\n");
  }
	return L;
}

void inverteLista(lista **L){
  lista *ant, *atual, *proximo;

  ant = NULL;
  atual = *L;
  proximo = NULL;

  while (atual != NULL){
    proximo = atual->prox;
    atual->prox = ant;
    ant = atual;
    atual = proximo;
  }
  *L = ant;
}

lista* combina(lista *L1, lista *L2){
  lista *aux1, *aux2;
  
  if (L2 != NULL) {
    if (L1 != NULL) {
      aux1 = L1;
      while (aux1->prox != NULL)
        aux1 = aux1->prox;
      aux1->prox = L2;
    } else
      L1 = L2;
  }

  return L1;
}

lista* apagaPares(lista *L){
  lista *aux, *pre, *lixo;

  aux = L->prox;
  pre = L;

  while (aux != NULL) {
    if (aux->info%2 == 0) {
      lixo = aux;
      pre->prox = aux->prox;
      free(lixo);
      aux = pre->prox;
    } else {
      pre = aux;
      aux = aux->prox;
    }
  }

  if (L->info%2 == 0){
    lixo = L;
    L = L->prox;
    free(lixo);
  }

  return L;
}

void imprimeLista(lista *L) {
    lista *aux;
    
    printf("\n");
    aux = L;
    while (aux != NULL) {
      printf("%d -> ", aux->info);
      aux = aux->prox;
    }
}

void imprimeReverso(lista *L){
  if (L!=NULL){
    imprimeReverso(L->prox);
    printf("%d -> ", L->info);
  }
}

int main(void) {
  lista *L1, *L2;
  int i, elem, N, ehRepetido=0; 

  L1 = NULL;
  L2 = NULL;

  do{
    printf("Digite a quantidade de elemento das listas (>0): ");
    scanf("%d", &N);
  } while (N<=0);

  printf("\n\n--- PREENCHENDO L1 ---\n");
  for(i=0; i<N; i++){
    printf("Digite o número que deseja inserir: ");
    scanf("%d", &elem);
    L1 = insereElem(L1, elem, &ehRepetido);
    if (ehRepetido){
      i--;
      ehRepetido = 0;
    }
  }

  printf("\n\n--- PREENCHENDO L2 ---\n");
  for(i=0; i<N; i++){
    printf("Digite o número que deseja inserir: ");
    scanf("%d", &elem);
    L2 = insereElem(L2, elem, &ehRepetido);
    if (ehRepetido){
      i--;
      ehRepetido = 0;
    }
  }

  //imprimeLista(L1);
  //imprimeLista(L2);

  inverteLista(&L1);
  inverteLista(&L2);
  //imprimeLista(L1);
  //imprimeLista(L2);

  L1 = combina(L1, L2);
  //imprimeLista(L1);

  L1 = apagaPares(L1);
  //imprimeLista(L1);

  printf("\n\nLista resultante de trás pra frente:\n");
  imprimeReverso(L1);

  printf("\n\n");
  return 0;
}