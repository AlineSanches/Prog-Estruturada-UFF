//* Faça um programa que preencha uma matriz 3x4 com números inteiros.
// a. Faça uma função para preencher a matriz;
// b. Faça uma função que escreva a matriz formatada; *//

#include <stdio.h>

#define LIN 3
#define COL 4

void preencheMatrizex04(int m[LIN][COL]){
  int  l, c;
  printf("\n------ Preenchendo a matriz ------\n\n");
  for (l=0; l<LIN; l++){
    for (c=0; c<COL; c++){
      printf("Digite um valor (linha %d, coluna %d): ", l, c);
      scanf("%d", &m[l][c]);
    }
  }
}

void escreveMatrizex04(int m[LIN][COL]){
  int l, c;
  printf("\n\n------ Imprimindo a matriz ------\n\n");
  for (l=0; l<LIN; l++){
    for (c=0; c<COL; c++){
      printf("%d ", m[l][c]);
    }
    printf("\n");
  }
}

int a06ex04(void){
  int mat[LIN][COL];
  preencheMatrizex04(mat);
  escreveMatrizex04(mat);
  return 0;
}