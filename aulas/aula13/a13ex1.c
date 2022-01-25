/* - Faça um programa que:
 Crie uma pilha encadeada com números inteiros
 Os números devem ser inseridos na pilha até que o usuário digite um número negativo
 Ao final do programa, imprima a pilha
 Devem ser criadas as funções push e pop*/

#include <stdio.h>
#include <stdlib.h>

struct NO {
  int info;
  struct NO *prox;
}; typedef struct NO pilha;

pilha *pushA12(pilha *topo, int elem){
  pilha *el;

  el = (pilha*) malloc(sizeof(pilha));
  el->info = elem;
  el->prox = topo;
  topo = el;
  return topo;
}

pilha *popA12(pilha *topo){
  pilha *lixo;

  if (topo != NULL) {
    lixo = topo;
    topo = topo->prox;
    free(lixo);
  }
  return topo;
}

void imprimePilha(pilha *topo){

  while (topo != NULL){
    printf("%d\n", topo->info);
    topo = popA12(topo);
  }
}

int a12ex2(void){
  pilha *topo;
  int elemento;

  topo = NULL;

  printf("Digite o elemento que deseja inserir: ");
  scanf("%d", &elemento);
  while(elemento>=0){
    topo = pushA12(topo, elemento); // insere o elemento
    printf("Digite o elemento que deseja inserir: ");
    scanf("%d", &elemento);
  }

  printf("\n\nImprimindo a pilha:\n");
  imprimePilha(topo);

  return 0;
}
