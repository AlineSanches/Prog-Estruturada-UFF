/* Sabendo que o último caractere de uma string é ‘\0’, faça um programa que 
escreva a quantidade de caracteres desta string. Crie uma função recursiva que retorne 
esta quantidade de caracteres. Não é permitido o uso da função strlen. */
#include <stdio.h>
#include <string.h>

int calculaQtdCaracteres(char *p){
  if(*p == '\0')
    return 0;
  else{
    p = &p[1];
    return (1 + calculaQtdCaracteres(p)); // poderia colocar func(p+1)
  }
}

int lP1ex06(void){
  char palavra[40];
  int qtdCaracteres;

  printf("Digite a palavra: ");
  scanf("%s", palavra);

  qtdCaracteres = calculaQtdCaracteres(palavra);
  printf("\nA palavra possui %d caracteres.\n", qtdCaracteres);
  return 0;
}