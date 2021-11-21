/* Faça um programa que leia a idade de um nadador e que calcule e mostre a sua categoria seguindo as regras:
• Categoria Baby: até 4 anos
• Categoria Infantil: 5 – 10 anos
• Categoria Juvenil: 11 – 17 anos
• Categoria Máster: A partir de 18 anos */

#include <stdio.h>

int l1ex03(void){
  int idade;
  printf("Insira a idade do nadador: ");
  scanf("%d", &idade);

  if (idade <= 4)
    printf("Categoria Baby\n");
  else
    if (idade >= 5 && idade <= 10)
      printf("Categoria Infantil\n");
    else
      if (idade >= 11 && idade <= 17)
        printf("Categoria Juvenil\n");
      else
        printf("Categoria Máster\n");
        
  return 0;
}