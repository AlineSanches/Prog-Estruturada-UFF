//* Faça um programa que preencha uma matriz NxN e que escreva a soma dos elementos da diagonal principal.
// a. Faça uma função para preencher a matriz;
// b. Faça uma função que escreva a matriz formatada;
//c. Faça uma função que retorne a soma dos elementos da diagonal principal. *//

#include <stdio.h>

#define N 3


void preencheMatrizex05(int m[N][N]){
  int  l, c;
  printf("\n------ Preenchendo a matriz ------\n\n");
  for (l=0; l<N; l++){
    for (c=0; c<N; c++){
      printf("Digite um valor (linha %d, coluna %d): ", l, c);
      scanf("%d", &m[l][c]);
    }
  }
}

void escreveMatrizex05(int m[N][N]){
  int l, c;
  printf("\n\n------ Imprimindo a matriz ------\n\n");
  for (l=0; l<N; l++){
    for (c=0; c<N; c++){
      printf("%d ", m[l][c]);
    }
    printf("\n");
  }
}

int somaDiagPrinc(int m[N][N]){
  int soma=0, i;
  for (i=0; i<N; i++)
    soma += m[i][i];

  return soma;
}

int a06ex05(void){
  int matriz[N][N];
  preencheMatrizex05(matriz);
  escreveMatrizex05(matriz);

  printf("\nA soma dos elementos da diagonal principal é %d\n", somaDiagPrinc(matriz));
  return 0;
}