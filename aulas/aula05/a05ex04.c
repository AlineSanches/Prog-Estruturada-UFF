/* Faça uma função que escreva os números pares menores ou iguais a N */

#include <stdio.h>

void numsPares(int n){
  if (n != 0){
    printf("%d ",n);
    return numsPares(n-2);
  }
}

int a05ex04(void){
  int N;
  printf("Digite o N: ");
  scanf("%d", &N);

  if(N%2!=0)
    N -= 1;

  printf("\nOs números pares menores ou igual a %d são:\n", N);
  numsPares(N);
  return 0;
}