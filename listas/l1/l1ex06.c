/* Faça um programa que leia um valor inteiro e que informe se este valor é par ou impar. */

#include <stdio.h>

int l1ex06(void){
  int val;

  printf("Insira o valor: ");
  scanf("%d", &val);

  if (val % 2 == 0)
    printf("\nO valor é par\n");
  else
    printf("\nO valor é ímpar\n");

  return 0;
}