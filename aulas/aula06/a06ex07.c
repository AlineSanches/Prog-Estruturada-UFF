/* Fazer um programa que leia códigos e preços dos produtos de uma 
 loja e que escreva ao final o código do produto mais caro.
 • Considere que o código é uma cadeia de 3 caracteres. 
 • Critério de parada = código "XXX"*/

#include <stdio.h>
#include <string.h>

#define TAM 4

int a06ex07(void){
  float preco, maiorPreco;
  char cod[TAM], codMaisCaro[TAM];

  printf("Digite o código do produto:\n");
  scanf("%s", cod);

  while (strcmp(cod,"XXX")!= 0){
    printf("Digite o preço do produto:\n");
    scanf("%f", &preco);

    if (preco>maiorPreco){
      maiorPreco = preco;
      strcpy(codMaisCaro,cod);
    printf("Digite o código do produto:\n");
    scanf("%s", cod);
    }
  }

  printf("\nO código do produto mais caro (R$%.2f) é %s\n", maiorPreco, codMaisCaro);
  return 0;
}