/* Faça um programa que leia um conjunto de números inteiros e que determine os números palíndromos. Palíndromos são
números que têm o mesmo valor se lidos da esquerda para a direita ou da direita para a esquerda. Exemplo: 44, 232,
1661, etc. O final da leitura é indicado por um número negativo. Faça uma função que irá retornar para o programa
principal se o número é palíndromo ou não. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int contaDigitos(int n){
  int t = 0;
  while (n!=0){
    t += 1;
    n /= 10;
  }
  return t;
}

int ehPalindromo(int num){
  int metade, tam=0, i=10;
  char nString[20];

  tam = contaDigitos(num);  
  metade = tam/2;
  sprintf(nString, "%d", num);

  for(i=0; i<metade; i++){
    if(nString[i] != nString[tam-i-1])
      return 0;
  }
  return 1;
}

int lP1ex01(void){
  int numero;

  printf("Digite o número: ");
  scanf("%d", &numero);
  while(numero>=0){
    if (ehPalindromo(numero))
      printf("\n\nO número %d é palíndromo", numero);
    else
      printf("\n\nO número %d não é palíndromo", numero);
      
    printf("\n\nDigite o número: ");
    scanf("%d", &numero);
  }

  return 0;
}