/*Faça um programa que:
 - Crie uma lista encadeada L com nomes de frutas
 - Os nomes devem ser inseridos na lista em ordem crescente até que o usuário digite a palavra ‘fim’
 - A lista não deve possuir nomes repetidos
 - Ao final do programa, imprima a lista
 F- aça funções para inserir um elemento e imprimir a lista */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct NO {
  char info[20];
  struct NO *prox;
}; typedef struct NO lista;

int buscaA12(lista *L, char *elem, lista **pre){
  lista *aux, *preL;
  aux = L->prox;
  preL = L;
  while ((aux != NULL) && strcmp(elem,aux->info)>0) {
    preL = aux;
    aux = aux->prox;
  }
  (*pre) = preL;
  if ((aux != NULL) && (!strcmp(elem,aux->info)))
    return 1;

  return 0;
}

lista *inserea12(lista *L, char *elem) {
  lista *pre, *el;
  if (!buscaA12(L,elem,&pre)) {
    el = (lista *)malloc(sizeof(lista));
    strcpy(el->info, elem);
    if (L == NULL || pre == NULL) {
      el->prox = L;
      L = el;
    } else {
      el->prox = pre->prox;
      pre->prox = el;
    }
  }
  return L;
}

void imprimeListaA12(lista *L){
  lista *aux;
  aux = L;

  while (aux != NULL){
    printf("%s\n", aux->info);
    aux = aux->prox;
  }
}

int a12ex1(void){
  lista *L;
  char fruta[20];
  L = (lista*) malloc(sizeof(lista));
  L->prox = NULL;

  printf("Digite a fruta que deseja inserir: ");
  scanf("%s", fruta);

  while(strcmp(fruta,"fim")){
    L = inserea12(L, fruta);
    printf("Digite a fruta que deseja inserir: ");
    scanf("%s", fruta);
  }

  imprimeListaA12(L);

  return 0;
} 