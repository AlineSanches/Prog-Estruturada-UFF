//* Fazer um programa que leia dois números inteiros A e B, e que troque seus valores. Escrever os valores antes e depois da troca. *//

#include <stdio.h>

int l0ex14(void){
  int a, b, tempA, tempB;
  printf("Insira A: ");
  scanf("%d", &a);
  printf("Insira B: ");
  scanf("%d", &b);

  tempA = a;
  tempB = b;
  a = tempB;
  b = tempA;

  printf("Antes da troca: A = %d e B = %d\nDepois da troca: A = %d e B = %d\n", tempA, tempB, a, b);
  return 0;
}