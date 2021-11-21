/* Faça um programa que leia uma hora (uma variável para hora e outra para minutos) e que calcule
 e mostre a hora convertida em minutos e em segundos. */

#include "stdio.h"

int l0ex05(void){
  int horas, minutos, minsConvertido, segsConvertido;

  printf("Digite ói a(s) hora(s):");
  scanf("%d", &horas);
  printf("Digite o(s) minuto(s):");
  scanf("%d", &minutos);

  minsConvertido = minutos + horas*60;
  segsConvertido = minsConvertido*60;

  printf("%d horas(s) e %d minuto(s) equivalem a %d minutos ou %d segundos", horas, minutos,minsConvertido, segsConvertido);

  return 0;
}