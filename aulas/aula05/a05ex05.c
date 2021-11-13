//* Faça uma função que retorne o enésimo termo de uma série de Fibonacci. *//

#include <stdio.h>
int fibRecursiva(int n){
  if (n==1)
    return 0;
  if (n==2)
    return 1;
  return (fibRecursiva(n-1)+fibRecursiva(n-2));
}

int main(void){
  int N;
  printf("Digite o N: ");
  scanf("%d", &N);

  printf("\nO %d° termo de uma série de fibonacci é: %d\n", N, fibRecursiva(N));

  return 0;
}