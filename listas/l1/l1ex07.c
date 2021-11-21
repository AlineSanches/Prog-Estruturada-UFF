/* Faça um programa que leia a quantidade de horas aula dadas por dois professores e o valor por
hora recebido por cada um. Mostrar na tela qual dos professores tem salário total maior. */

#include <stdio.h>

int l1ex07(void){
  int qtdHoras1, qtdHoras2;
  float valorHora1, valorHora2, salarioTotal1, salarioTotal2;

  printf("Insira a quantidade de horas de aula dada e o valor recebido por hora du professore 1:\n");
  scanf("%d %f", &qtdHoras1, &valorHora1);
  salarioTotal1 = qtdHoras1 * valorHora1;
  
  printf("\nInsira a quantidade de horas de aula dada e o valor recebido por hora du professore 2:\n");
  scanf("%d %f", &qtdHoras2, &valorHora2);
  salarioTotal2 = qtdHoras2 * valorHora2;

  if (salarioTotal1 > salarioTotal2)
    printf("\nE professore 1 tem o maior salário total, R$%.2f\n", salarioTotal1);

  else if (salarioTotal2 > salarioTotal1)
    printf("\nE professore 2 tem o maior salário total, R$%.2f\n", salarioTotal2);

  else
    printf("\nOs professores tem salários iguais, R$%.2f\n", salarioTotal2);

  return 0;
}