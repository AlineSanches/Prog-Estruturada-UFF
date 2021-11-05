//* Faça um programa que calcule o valor de E.
// E = 1 + 1/(1!) + 1/(2!) + 1/(3!) + ... + 1/(N!) *//

#include <stdio.h>

int calculaE(void){
  int n, fatorial = 1, i;
  float e = 1.0;

  printf("Digite o número: ");
  scanf("%d", &n);

  for(i=1; i<=n; i++){
    fatorial *= i;
    e += 1.0/fatorial;
  }

  printf("\nO valor de E, considerando N=%d é %.4f\n", n, e);

  return 0;
}