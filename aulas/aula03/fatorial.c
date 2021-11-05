//* Faça um programa para calcule o fatorial de N.*//

#include <stdio.h>

int fatorial(void){
  int n, fatorial = 1, i;

  printf("Digite um valor para N: ");
  scanf("%d", &n);

  for(i=2; i<=n; i++)
    fatorial *= i;

  printf("\nO fatorial de %d é %d\n", n, fatorial);

  return 0;
}