/* Fazer um programa que leia N números naturais e que escreva o
somatório dos números pares e a média dos múltiplos de 3. */

#include <stdio.h>

int a03ex9(void) {
  int i, N, valor, somaPares=0, somaMults3=0, countMults3=0;
  float mediaMults3=0;

  printf("Digite um valor para N: ");
  scanf("%d", &N);

  for (i=0; i<N; i++){
    printf("Digite um número: ");
    scanf("%d", &valor);
    if (valor%2 == 0)
      somaPares += valor;
    if (valor%3 == 0){
      somaMults3 += valor;
      countMults3 += 1;
    }
  }

  mediaMults3 = somaMults3/countMults3;
  printf("\nSomatório dos números pares = %d\nMédia dos múltiplos de 3 = %.2f", somaPares, mediaMults3);
  
  return 0;
}