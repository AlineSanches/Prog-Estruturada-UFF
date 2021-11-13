//* Faça uma função que calcule Xn, sendo N ≥ 0. *//

#include <stdio.h>

int potencia(int x, int exp){
  if (exp == 0)
    return 1;

  return (potencia(x, exp-1)*x);
}

int a05ex01(void){
  int x, expoente;
  printf("Digite a base: ");
  scanf("%d", &x);

  do{
    printf("\nDigite o expoente: ");
    scanf("%d", &expoente);
  } while (expoente < 0);

  printf("\n%d^%d = %d\n", x, expoente, potencia(x, expoente));
  return 0;
}