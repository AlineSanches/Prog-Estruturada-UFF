/* Fazer um programa que crie uma lista simplesmente encadeada com nó cabeça:

Na lista devem ser inseridos números inteiros.
Os números devem ser inseridos ao final da lista.
Podem ser inseridos números repetidos.
Devem ser inseridos números até que se digite um número negativo.
Imprimir a lista
Perguntar ao usuário um número para apagar.
Apagar todas as ocorrências deste número na lista.

O programa só poderá ter 3 funções:

main
imprime
insere */

#include <stdio.h>
#include <stdlib.h>

struct NO {
	int info;
	struct NO *prox;
}; typedef struct NO lista;

void insereElemA16(lista *L, int elem) {
  lista *el, *aux;
  
  aux = L;
  while (aux->prox != NULL){
    aux = aux->prox;
  }

  el = (lista *)malloc(sizeof(lista));
  el->info = elem;
  el->prox = NULL;
  aux->prox = el;
}

void mostraListaA16(lista *L){
  lista *aux;
  aux = L->prox;

  while (aux != NULL){
    printf("%d -> ", aux->info);
    aux = aux->prox;
  }
}

int a16ex2(void){
  lista *L, *aux, *lixo;
  int elem;

  L = (lista*) malloc(sizeof(lista));
  L->prox = NULL;

  printf("Digite o número que deseja inserir: ");
  scanf("%d", &elem);

  while(elem >= 0){
    insereElemA16(L, elem);
    printf("Digite o número que deseja inserir: ");
    scanf("%d", &elem);
  }

  mostraListaA16(L);

  printf("\nDigite qual número deseja apagar: ");
  scanf("%d", &elem);

  aux = L;
  while (aux->prox != NULL){
    if(aux->prox->info == elem){
			lixo = aux->prox;
			aux->prox = lixo->prox;
      free(lixo);
		} else{ 
    aux = aux->prox;
    }
  }

  mostraListaA16(L);

  return 0;
}
