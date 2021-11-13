#include <stdio.h>
//* Faça um programa que leia 2 valores inteiros A e B e escreva o resultado da operação (+, -, * ou /) escolhida pelo usuário. *//

int operacao1(void) {
  float a, b;
  char operacao;
  printf("Digite 2 valores inteiros:\n");
  scanf("%f %f", &a, &b);

  printf("\nDigite a operação a ser realizada (+, -, * ou /): ");
  getchar(); // ou coloca isso ou coloca " %c"
  scanf("%c", &operacao);

  switch (operacao){
    case '+':
      printf("\nSOMA: %.2f\n", a+b);
      break;
    case '-':
      printf("\nSUBTRAÇÃO: %.2f\n", a-b);
      break;
    case '*':
      printf("\nMULTIPLICAÇÃO: %.2f\n", a*b);
      break;
    case '/':
      printf("\nDIVISÃO: %.2f\n", a/b);
      break;
    default:
      printf("\nOperação não existe\n");
      break;

  }
  return 0;
}