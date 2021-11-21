#include <stdio.h>
/* Faça um programa que leia 3 valores reais e que verifique se eles formam um triângulo. Em caso positivo, indique se o triângulo é equilátero, isósceles ou escaleno. */

int classTriangulo(void) {
  int a, b, c;

  printf("Digite 3 lados do quadrado:\n");
  scanf("%d %d %d", &a, &b, &c);

  if (a+b <= c || b+c <= a || a+c <= b)
    printf("\nOs lados não formam um triângulo\n");
  else
    if (a == b && b == c)
      printf("\nO triângulo é equilátero\n");
    else
      if (a == b || a == c)
        printf("\nO triângulo é isósceles\n");
      else
        printf("\nO triângulo é escaleno\n");

  return 0;
}