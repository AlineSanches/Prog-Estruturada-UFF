/* Crie uma matriz N x N que representará as amizades entre um grupo de pessoas. A matriz AMIZADE é preenchida, em cada
posição com o número 0 ou 1. O número 1 em uma posição i,j indica que a pessoa i é amiga de j. Por outro lado, o número 0
indica que i e j não são amigos.
o Faça um programa que preencha a matriz de amizades e depois verifique 
se existe alguma inconsistência, já que a relação de amizade é recíproca.
o Faça uma função que retorne quantas inconsistências existem na matriz. */

#include <stdio.h>

#define N 4

void preencheMatrizex06(int m[N][N]){
  int  l, c;
  printf("\n------ Preenchendo a matriz ------\n\n");
  for (l=0; l<N; l++){
    for (c=0; c<N; c++){
      printf("A pessoa %d é amiga de %d? (1-SIM, 0-NÃO): ", l, c);
      scanf("%d", &m[l][c]);
    }
    printf("\n");
  }
}

void escreveMatrizex06(int m[N][N]){
  int l, c;
  printf("\n\n------ Imprimindo a matriz ------\n\n");
  for (l=0; l<N; l++){
    for (c=0; c<N; c++){
      printf("%d ", m[l][c]);
    }
    printf("\n");
  }
}

int verificaInconsistencia(int m[N][N]){
  int countIncons=0, l, c;
  for (l=0; l<N; l++){
    for (c=l; c<N; c++){
      if(m[l][c]!=m[c][l])
        countIncons+=1;
    }
  }
  return countIncons;
}

int a06ex06(void){
  int amizade[N][N], qtdInconsistencias;

  preencheMatrizex06(amizade);
  // escreveMatrizex06(amizade);
  qtdInconsistencias = verificaInconsistencia(amizade);
  
  if (qtdInconsistencias)
    printf("\nTem %d inconsistência(s) na matriz\n", qtdInconsistencias);
  else
    printf("\nNão há inconsistências na matriz\n");
  return 0;
}