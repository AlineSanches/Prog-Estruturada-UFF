/* Um funcionário recebe um salário fixo mais 4% de comissão sobre as suas vendas. Faça um programa que receba o 
valor do salário fixo do funcionário, o valor das suas vendas e que calcule e mostre o salário final do funcionário. */

#include <stdio.h>
int l0ex04(void){
  float salFixo, valVendas, salFinal;

  printf("Insira seu salário fixo: ");
  scanf("%f", &salFixo);
  printf("Insira o valor de suas vendas: ");
  scanf("%f", &valVendas);

  salFinal = salFixo + valVendas*0.04;

  printf("\nSeu salário final é R$%.2f", salFinal);

  return 0;
}