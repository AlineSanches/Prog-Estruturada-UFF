/* Faça um programa que leia N valores em dólar e que
transforme para real. Deve ser feita uma função que receba o
valor em dólar, a cotação e retorne o equivalente em real. */

#include <stdio.h>

float converteDolPReal(float dol, float cot){
  return (dol*cot);
}

int a04ex01(void){
  int N, i;
  float valDolar, cotacao;

  printf("Digite a cotação do dólar: ");
  scanf("%f", &cotacao);

  printf("\nDigite quantos valores você quer converter: ");
  scanf("%d", &N);

  for (i=0; i<N; i++){
  printf("\nDigite o valor em dólar: ");
  scanf("%f", &valDolar);

  printf("$%.2f corresponde a R$%.2f \n", valDolar, converteDolPReal(valDolar, cotacao));
  }
  return 0;
}