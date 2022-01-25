/* \Faça um programa que:
- Crie uma fila encadeada com números inteiros
- Os números devem ser inseridos na fila até que o usuário digite um número negativo
- Após criada a fila, insira os números pares da fila em uma pilha
- Após esse processo, a fila estará vazia
- Ao final, imprima a pilha*/

#include <stdio.h>
#include <stdlib.h>

struct NO {
  int info;
  struct NO *prox;
}; typedef struct NO fila;
typedef struct NO pilha;

void insereElemFilaEx3(fila **inicio, fila **fim, int elem){
  fila *el;

  el = (fila*) malloc(sizeof(fila));
  el->info = elem;
  el->prox = NULL;
  if ((*inicio) == NULL)
    (*inicio) = el;
  else
    (*fim)->prox = el;

  (*fim) = el;
}

fila *removeElemFilaEx3(fila *inicio){
  fila *lixo;

  if (inicio != NULL) {
    lixo = inicio;
    inicio = inicio->prox;
    free(lixo);
  }
  return inicio;
}

pilha *insereElemPilha(pilha *topo, int elem){
  pilha *el;

  el = (pilha*) malloc(sizeof(pilha));
  el->info = elem;
  el->prox = topo;
  topo = el;
  return topo;
}

pilha *removeElemPilha(pilha *topo){
  pilha *lixo;

  if (topo != NULL) {
    lixo = topo;
    topo = topo->prox;
    free(lixo);
  }
  return topo;
}


int a13ex3(void){
  fila *inicio, *fim;
  int elemento;

  inicio = NULL;
  fim = NULL;

  printf("Digite o elemento que deseja inserir na fila: ");
  scanf("%d", &elemento);
  while(elemento>=0){
    insereElemFilaEx3(&inicio, &fim, elemento); // insere o elemento
    printf("Digite o elemento que deseja inserir na fila: ");
    scanf("%d", &elemento);
  }

  pilha *topo;
  topo = NULL;

  while (inicio != NULL){
    if ((inicio->info)%2==0)
      topo = insereElemPilha(topo, inicio->info);
    inicio = removeElemFilaEx3(inicio);
  }

  printf("\n\nImprimindo a pilha:\n");
  while (topo != NULL){
    printf("%d\n", topo->info);
    topo = removeElemPilha(topo);
  }
  return 0;
}