/* Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte característica: se
dividirmos o número em dois números de dois dígitos, um composto pela dezena e pela unidade, e
outro pelo milhar e pela centena, se somarmos estes dois novos números gerando um terceiro, o
quadrado deste terceiro número é exatamente o número original de quatro dígitos.
Por exemplo: 2025 -> dividindo: 20 e 25 -> somando temos 45 -> 452 = 2025.
Escreva um programa para ler um número e verificar se ele obedece a esta característica. */

#include <stdio.h>
#include <math.h>

int l1ex10(void){
  int numero, num1, num2;
  printf("Digite o número de 4 digitos: ");
  scanf("%d", &numero);

  num1 = numero / 100;
  num2 = ((numero / 10)%10)*10 + numero%10;

  if (pow(num1 + num2,2) == numero)
    printf("\nO número %d obedece a esta característica!\n", numero);
  else
    printf("\nO número %d não obedece a esta característica\n", numero);
  return 0;
}