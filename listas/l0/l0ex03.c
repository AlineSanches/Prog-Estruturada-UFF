//* Sabendo que o quilowatt de energia custa um décimo do salário mínimo, faça um programa que leia o valor do salário mínimo e a quantidade de quilowatts gasta por um usuário e calcule e escreva: o valor de um quilowatt e o valor da conta de energia do usuário. *//

#include <stdio.h>

int l0ex03(void){
  float salMin, consumo, valKwh, contaLuz;

  printf("Digite o valor do salário mínimo: ");
  scanf("%f", &salMin);
  printf("\nDigite a quantidade de KWh gasta: ");
  scanf("%f", &consumo);
  
  valKwh = salMin/10;
  contaLuz = valKwh*consumo;

  printf("\nO valor do quilowatt está R$%.2f", valKwh);
  printf("\nA conta de energia do usuário é R$%.2f", contaLuz);

  return 0;
}