#include <stdio.h>
/* Programa que lê 3 notas e escreve a média aritmética */

int media(void) {
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