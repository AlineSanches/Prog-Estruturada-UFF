#include <stdio.h>
//* Faça um programa que leia 3 valores inteiros (diferentes) e escreva qual o maior *//

int achaMaior(void) {
  int a, b, c, maior;

  printf("Digite 3 valores:\n");
  scanf("%d %d %d", &a, &b, &c);

  maior = c;
  if (a>b){
    if (a>c)
      maior = a;
  }
  else
    if (b>c)
      maior = b;

  printf("\nO maior valor é %d", maior);

  return 0;
}