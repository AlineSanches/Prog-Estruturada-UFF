/* Faça um programa que leia 2 pontos e implemente uma única função que:
 Receba os pontos lidos como parâmetros
 Retorne a multiplicação dos pontos
 Retorne a soma dos pontos */

#include <stdio.h>

struct tipoPonto {
  int x;
  int y;
}; typedef struct tipoPonto tPonto;

void calculaPts(tPonto pA, tPonto pB, tPonto *soma, tPonto *mult){
  soma->x = pA.x + pB.x;
  soma->y = pA.y + pB.y;

  mult->x = pA.x * pB.x;
  mult->y = pA.y * pB.y;
}

int a08ex03(void){
  tPonto pontoA, pontoB, somaPts, multPts;
  
  printf("Digite as coordenadas do ponto 1 (ex: x y)\n");
  scanf("%d %d", &pontoA.x, &pontoA.y);
  printf("Digite as coordenadas do ponto 2 (ex: x y)\n");
  scanf("%d %d", &pontoB.x, &pontoB.y);

  calculaPts(pontoA, pontoB, &somaPts, &multPts);

  printf("\nA soma dos pontos é (%d, %d)", somaPts.x, somaPts.y);
  printf("\nA multiplicação dos pontos é (%d, %d)\n", multPts.x, multPts.y);

  return 0;
}