/* Criar uma pilha de inteiros de tamanho MAX. Fazer as funções de PUSH e POP. 
Inserir N elementos e depois imprimir os elementos da pilha. */

#include <stdio.h>

#define MAX 5

struct pilha{
  int vetor[MAX];
  int iTopo;
}; typedef struct pilha tPilha;


void push(tPilha *P, int num) {
  if (P->iTopo < MAX-1) {
    P->iTopo++;
    P->vetor[P->iTopo] = num;
  }
}

int pop(tPilha *P) {
  int num;
  if (P->iTopo >= 0) {
    num = P->vetor[P->iTopo];
    P->iTopo--;
  }
return num;
}


int a10ex1(void){
  tPilha pilha;
  int n;

  pilha.iTopo = -1;

  printf("Digite um número: ");
  scanf("%d", &n);
  while(n>=0){
    printf("topo: %d\n", pilha.iTopo);
    push(&pilha, n);
    printf("Digite um número: ");
    scanf("%d", &n);
  }

  printf("\n\nImprimindo a pilha:\n");
  while(pilha.iTopo){
    n = pop(&pilha);
    printf("%d\n", n);
  }
  return 0;
}