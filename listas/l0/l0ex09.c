//* Faça um programa que leia o salário de um funcionário e que calcule e escreva o salário com um desconto de 10%. *//

#include <stdio.h>

int l0ex09(void){
  float sal;
  printf("Digite seu salário: ");
  scanf("%f", &sal);

  sal -= sal/10;

  printf("Seu salário com 10%% de desconto é R$%.2f.\n", sal);
  return 0;
}