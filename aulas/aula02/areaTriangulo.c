#include <stdio.h>
/* Faça um programa que leia 3 notas e escreva a média aritmética */

int areaTriangulo(void) {
  float base, altura, area;

  printf("Digite a base: ");
  scanf("%f", &base); // ou ("%f %f", &base, &altura);
  printf("\nDigite a altura: ");
  scanf("%f", &altura);
  area = (base*altura)/2;

  printf("\nA área é: %.2f", area);
  return 0;
}