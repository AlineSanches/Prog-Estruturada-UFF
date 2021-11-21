/* Faça um programa que leia o salário de um funcionário e o salário mínimo vigente. Calcular e escrever quantos salários mínimos ganha o funcionário. */

#include <stdio.h>
int l0ex11(void){
  float salFun, salMin, salEmSalMin;

  printf("Insira o salário do(a) funcionário(a): ");
  scanf("%f", &salFun);
  printf("Insira o valor do salário mínimo vigente: ");
  scanf("%f", &salMin);

  salEmSalMin = salFun/salMin;

  printf("\nO(A) funcionário(a) ganha %.2f salários mínimos\n", salEmSalMin);

  return 0;
}