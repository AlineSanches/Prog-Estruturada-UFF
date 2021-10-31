//* Faça um programa que leia dois números inteiros e que calcule e mostre a soma e a multiplicação dos dois números e a divisão e a subtração do primeiro pelo segundo. *//

#include <stdio.h>

int l0ex13(void){
  int a, b;

  printf("Digite o primeiro número: ");
  scanf("%d", &a);
  printf("Digite o segundo número: ");
  scanf("%d", &b);

  printf("\nSoma = %d\nMultiplicação = %d\nDivisão = %.2f\nSubtração = %d\n", a+b, a*b, (float)a/b, a-b);
  return 0;
}