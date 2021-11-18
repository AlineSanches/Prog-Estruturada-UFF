//* Faça um programa que leia o número de eleitores de um município, o número de votos brancos, nulos 
// e validos. Calcule e escreva o percentual que cada um representa em relação ao total de eleitores. *//

#include <stdio.h>

int l1ex08(void){
  int qtdEleitores, qtdBrancos, qtdNulos, qtdVals;
  
  printf("Digite o número de eleitores: ");
  scanf("%d", &qtdEleitores);

  printf("\nDigite o número de votos brancos: ");
  scanf("%d", &qtdBrancos);

  printf("\nDigite o número de votos nulos: ");
  scanf("%d", &qtdNulos);

  printf("\nDigite o número de votos válidos: ");
  scanf("%d", &qtdVals);

  printf("\n%.2f%% dos votos foram brancos", 100.0*qtdBrancos/qtdEleitores);
  printf("\n%.2f%% dos votos foram nulos", 100.0*qtdNulos/qtdEleitores);
  printf("\n%.2f%% dos votos foram válidos\n", 100.0*qtdVals/qtdEleitores);

  return 0;
}