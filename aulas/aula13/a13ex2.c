/* Faça um programa que:
 - Crie uma fila encadeada com números inteiros
 - Os números devem ser inseridos na pilha até que o usuário
digite um número negativo
 - Ao final do programa, imprima a fila
 - Devem ser criadas as funções insere e remove */

#include <stdio.h>
#include <stdlib.h>

struct NO {
  int info;
  struct NO *prox;
}; typedef struct NO fila;

void insereElemFila(fila **inicio, fila **fim, int elem){
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

fila *removeElemFila(fila *inicio){
  fila *lixo;

  if (inicio != NULL) {
    lixo = inicio;
    inicio = inicio->prox;
    free(lixo);
  }
  return inicio;
}


int a13ex2(void){
  fila *inicio, *fim;
  int elemento;

  inicio = NULL;
  fim = NULL;

  printf("Digite o elemento que deseja inserir: ");
  scanf("%d", &elemento);
  while(elemento>=0){
    insereElemFila(&inicio, &fim, elemento); // insere o elemento
    printf("Digite o elemento que deseja inserir: ");
    scanf("%d", &elemento);
  }

  printf("\n\nImprimindo a fila:\n");
  while (inicio != NULL){
    printf("%d\n", inicio->info);
    inicio = removeElemFila(inicio);
  }

  return 0;
}