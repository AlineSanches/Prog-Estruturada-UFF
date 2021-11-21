/* Faça um programa que escreva quanto um consumidor deverá pagar na sua conta de luz. Os dados de entrada do algoritmo devem ser: o nome do consumidor, o seu consumo mensal em quilowatts, e o preço equivalente a um quilowatt. */

#include <stdio.h>

int l0ex02(void){
  char nome[20];
  float consumo, valKwh, contaLuz;

  printf("Digite seu nome: ");
  scanf("%s", nome);
  printf("\nDigite seu consumo mensal em KWh: ");
  scanf("%f", &consumo);
  printf("\nDigite o preço do KWh: ");
  scanf("%f", &valKwh);

  contaLuz = consumo*valKwh;
  printf("\n%s, sua conta de luz será R$%.2f.", nome, contaLuz);

  return 0;
}