/* - Faça um programa que crie uma fila com os N
números de processos que estão esperando para executar em um sistema

- Considere que os X (X < N) primeiros processos terminaram a sua execução
- Escreva o nome do primeiro processo da Fila
- Implemente a estrutura de Fila e as funções para inserir e remover elementos */

#include <stdio.h>
#define MAX 100

struct FILA {
  int dado[MAX];
  int inicio,fim,total;
}; typedef struct FILA fila;

void insere(fila *F, int num) {
  if (F->total < MAX) {
    F->dado[F->fim] = num;
    F->fim++;
    F->fim = F->fim%MAX;
    F->total++;
  }
}

int remover(fila *F) {
  int num;
  if (F->total > 0) {
    num = F->dado[F->inicio];
    F->inicio++;
    F->inicio = F->inicio%MAX;
    F->total--;
  }
  return num;
}

int a10ex2(void) {
  int n, x, qtd, i;
  fila F;
  F.inicio = 0;
  F.fim = 0;
  F.total = 0;

  printf("Digite a quantidade de processos: ");
  scanf("%d", &qtd);
  for (i=0; i<qtd; i++){
    printf("Digite o número do processo: ");
    scanf("%d", &n);
    insere(&F, n);
  }

  do{
    printf("\nDigite a quantidade de processos que terminaram: ");
    scanf("%d", &x);
  } while (x>qtd);
  
  for(i=0; i<x; i++){
    remover(&F);
  }


  printf("\nPrimeiro processo da fila: %d", F.dado[F.inicio]);

  return 0;
}