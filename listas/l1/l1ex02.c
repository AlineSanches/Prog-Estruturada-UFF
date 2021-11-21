/* Faça um programa que leia dois números inteiros e que calcule e mostre a soma e a multiplicação
dos dois números e a divisão e a subtração do primeiro pelo segundo. Caso o segundo número
digitado seja zero, o programa deve informar ao usuário que a operação de divisão é impossível. */

#include <stdio.h>

int l1ex02(void){
  int a, b;

  printf("Digite o primeiro número: ");
  scanf("%d", &a);
  printf("Digite o segundo número: ");
  scanf("%d", &b);

  printf("\nSoma = %d\nMultiplicação = %d\nSubtração = %d\n", a+b, a*b, a-b);
  if (b == 0)
    printf("A operação de divisão é impossível.\n");
  else
    printf("Divisão = %.2f\n", (float)a/b);

  return 0;
}