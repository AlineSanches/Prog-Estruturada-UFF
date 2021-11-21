/* Faça uma função que some os números inteiros positivos compreendidos entre A e B.
Considere que A < B e que A e B devem entrar na soma. */

#include <stdio.h>

int somaa05(a, b){
  if (b == a)
    return a;
  else
    return b + somaa05(a, b-1);
  
  return 0;
}

int a05ex02(void){
  int A, B;
  printf("Digite um valor para A: ");
  scanf("%d", &A);

  do{
  printf("Digite um valor para B (>A): ");
  scanf("%d", &B);
  } while (B<=A);

  printf("\nA soma dos números inteiros entre %d e %d é %d\n", A, B, somaa05(A, B));

  return 0;
}