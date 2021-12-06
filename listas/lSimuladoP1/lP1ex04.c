/* Faça um programa que leia dois números inteiros e que calcule o MDC (máximo divisor comum) entre eles. Crie uma função recursiva que retorne o valor do MDC, sabendo que:
mdc(x, y) = y, se y ≤ x e x resto y = 0
mdc(x, y) = mdc(y, x), se x < y
mdc(x, y) = mdc(y, x resto y), caso contrário */

#include <stdio.h>

int calculaMDC(x, y){
  if (y<=x && x%y == 0)
    return y;
  else if(x<y)
    return calculaMDC(y,x);
  else
    return calculaMDC(y, x%y);
}

int lP1ex04(void){
  int valX, valY, mdc;
  printf("Digite X: ");
  scanf("%d", &valX);
  printf("Digite Y: ");
  scanf("%d", &valY);  

  mdc = calculaMDC(valX, valY);
  printf("O MDC entre %d e %d é %d.\n", valY, valX, mdc);
  return 0;
}