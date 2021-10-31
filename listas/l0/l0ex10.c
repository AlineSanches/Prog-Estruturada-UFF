//* Fazer um programa que leia uma temperatura em graus Celsius e transforme para Farenheit. C = 5/9 (F-32) *//

#include <stdio.h>

int l0ex10(void){
  float tempCelsius, tempFaren;
  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &tempCelsius);

  tempFaren = (tempCelsius*9/5) + 32;

  printf("\n%.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", tempCelsius, tempFaren);
  return 0;
}