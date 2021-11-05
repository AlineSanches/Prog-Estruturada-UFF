//* Fazer um programa que escreva a série de Fibonnacci, cujo último termo 
// seja menor ou igual a N. Obrigar o usuário a digitar um valor positivo para N. *//

#include <stdio.h>

int fibonacci(void){
  int N, fib = 1, ultimo = 1, penultimo = 0;
  do{
    printf("Digite um valor para N: ");
    scanf("%d", &N);
  } while(N < 1);

  printf("\n0");
  while(fib <= N){
    printf(", %d", fib);
    fib = ultimo + penultimo;
    penultimo = ultimo;
    ultimo = fib;
  }

  printf("\n");
  return 0;
}