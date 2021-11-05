//* Faça um programa para somar os múltiplos de N maiores do que 100 e menores do que 200. *//

#include <stdio.h>

int somadorEntre100E200(void){
  int n, multiplo, soma = 0, resto;
  printf("Digite o número: ");
  scanf("%d", &n);

  resto = 100%n;
  multiplo = 100 + (n - resto);

  while (multiplo<200){
    soma += multiplo;
    multiplo += n;
  }

  printf("\nA soma dos múltiplos de %d menores do que 200 é %d\n", n, soma);

  return 0;
}