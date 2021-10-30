//* Faça um programa que leia três notas e que calcule e escreva a média aritmética dessas notas. *//

#include <stdio.h>

int l0ex7(void) {
  float a, b, c, media;
  printf("Digite a primeira nota: ");
  scanf("%f", &a);
  printf("Digite a segunda nota: ");
  scanf("%f", &b);
  printf("Digite a terceira nota: ");
  scanf("%f", &c);
  media = (a + b + c)/3;

  printf("A média é: %.2f", media);
  return 0;
}