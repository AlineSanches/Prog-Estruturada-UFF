/* Uma empresa que comercializa produtos alimentícios controla seu estoque diariamente. Faça um programa que leia a
quantidade de estoque diário do mês passado e que calcule a média mensal em estoque. Determine também o maior e
menor estoque lidos. */
#include <stdio.h>

int lP1ex08(void){
  int dias, i;
  float soma=0, estoque, maior, menor;
  printf("Digite a quantidade de dias: ");
  scanf("%d", &dias);
  printf("Digite o estoque do dia 1: ");
  scanf("%f", &estoque);
  maior = estoque;
  menor = estoque;
  soma += estoque;
  
  for(i=1; i<dias; i++){
    printf("Digite o estoque do dia %d: ", i+1);
    scanf("%f", &estoque);
    if (estoque > maior)
      maior = estoque;
    if (estoque < menor)
      menor = estoque;
    soma += estoque;
  }

  printf("\nMédia mensal em estoque = %.2f\n Maior estoque = %.2f\n Menor estoque = %.2f\n", soma/dias, maior, menor);
  return 0;
}