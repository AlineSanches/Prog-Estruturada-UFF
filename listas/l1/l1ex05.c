//* Faça um programa que leia a altura e o sexo de uma pessoa e escreva o seu peso ideal, utilizando as seguintes fórmulas:
// • para homens: (72,7 * altura) – 58,0
// • para mulheres: (62,1 * altura) – 44, *//

#include <stdio.h>

int l1ex05(void){
  float altura;
  char sexo;

  printf("Insira sua altura em metros:\n");
  scanf("%f", &altura);
  
  do{
  printf("Insira seu sexo (M ou H):\n");
  scanf(" %c", &sexo);
  } while (sexo != 'M' && sexo != 'H');

  if (sexo == 'M')
    printf("Seu peso ideal é %.2f\n", (62.1*altura - 44));
  else
    printf("Seu peso ideal é %.2f\n", (72.7 * altura - 58.0));
  


  

  return 0;
}