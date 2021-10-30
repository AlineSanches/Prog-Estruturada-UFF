#include <stdio.h>
#include <math.h>

int l0ex1(void){
  float base, altura, perimetro, area, diagonal;
  printf("Digite a base do retângulo: ");
  scanf("%f", &base);
  printf("\nDigite a altura do retângulo: ");
  scanf("%f", &altura);
  perimetro = base*2 + altura*2;
  area = base * altura;
  diagonal = pow(pow(base, 2) + pow(altura, 2), 0.5);

  printf("\nPerímetro = %.2f\nÁrea = %.2f\nDiagonal = %.2f", perimetro, area, diagonal);
  return 0;
}