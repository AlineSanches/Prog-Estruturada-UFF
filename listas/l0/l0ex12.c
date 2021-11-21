/* Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcular e escrever a idade dessa pessoa em anos, meses e semanas. */

#include "stdio.h"

int l0ex12(void){
  int anoNasc, anoAtual, idadeAnos, idadeMeses, idadeSemanas;
  printf("Digite o seu ano de nascimento: ");
  scanf("%d", &anoNasc);
  printf("Digite o ano atual: ");
  scanf("%d", &anoAtual);

  idadeAnos = anoAtual - anoNasc;
  idadeMeses = idadeAnos * 12;
  idadeSemanas = idadeMeses * 4; // considerando que cada mês tem 4 semanas
  
  printf("Sua idade é %d em anos, %d em meses e %d em semanas", idadeAnos, idadeMeses, idadeSemanas);
  return 0;
}