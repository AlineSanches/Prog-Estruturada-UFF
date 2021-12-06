/* Faça um programa que escreva uma série com os números inteiros compreendidos 
entre i e j. O intervalo entre os números deve ser k. Crie uma função recursiva
imprimeSerie(i,j,k) que escreva os elementos desta série. */

#include <stdio.h>

void imprimeSerie(int i, int j, int k){
  if(i<=j){
    printf("\n%d", i);
    imprimeSerie(i+k, j, k);
  }
}

int lP1ex05(void){
  int inicio, fim, intervalo;
  printf("Digite o início do intervalo: ");
  scanf("%d", &inicio);
  do{
    printf("Digite o fim do intervalo: ");
    scanf("%d", &fim);
  } while (fim<inicio);
  printf("Digite o salto do intervalo: ");
  scanf("%d", &intervalo);
  imprimeSerie(inicio, fim, intervalo);
  return 0;
}