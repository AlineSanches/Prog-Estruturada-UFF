/* Faça um programa que leia três notas de um aluno com os seus respectivos pesos e que calcule e escreva a média ponderada dessas notas. */

#include <stdio.h>

int l0ex08(void) {
  float a, pesoa, b, pesob, c, pesoc, media;
  printf("Digite a primeira nota e seu peso: ");
  scanf("%f %f", &a, &pesoa);
  printf("Digite a segunda nota e seu peso: ");
  scanf("%f %f", &b, &pesob);
  printf("Digite a terceira nota e seu peso: ");
  scanf("%f %f", &c, &pesoc);
  media = (a*pesoa + b*pesob + c*pesoc)/(pesoa + pesob + pesoc);

  printf("\nA média é: %.2f", media);
  return 0;
}