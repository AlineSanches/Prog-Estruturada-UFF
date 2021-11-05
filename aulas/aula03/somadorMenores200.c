//* Faça um programa para somar os múltiplos de N menores do que 200.*//

#include <stdio.h>

int somadorMenores200(void){
  int n, multiplo, soma = 0;

  printf("Digite o número: ");
  scanf("%d", &n);

  multiplo = n;
  while (multiplo<200){
    soma += multiplo;
    multiplo += n;
  }

  printf("\nA soma dos múltiplos de %d menores do que 200 é %d\n", n, soma);

  return 0;
}