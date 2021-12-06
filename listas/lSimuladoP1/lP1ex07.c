/* Faça um programa que leia dois números inteiros A e B e que calcule o quociente da divisão de A por B. O programa
deve conter uma função recursiva que retorne este valor, entretanto para este cálculo não deve ser usada nenhuma
operação de divisão. Lembre-se que a divisão é conjunto de subtrações sucessivas. */
#include <stdio.h>

int calculaQuociente(int a, int b){
  if (a-b < 0)
    return 0;
  else
    return (1+ calculaQuociente(a-b, b));
}

int lP1ex07(void){
  int numA, numB, quociente;
  printf("Digite o numerador: ");
  scanf("%d", &numA);
  do{
    printf("Digite o denominador: ");
    scanf("%d", &numB);
  }while(numB<=0);

  quociente = calculaQuociente(numA, numB);
  printf("\nO quociente da divisão de %d por %d é %d\n", numA, numB, quociente);

  return 0;
}
