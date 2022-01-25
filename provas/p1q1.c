#include <stdio.h>

#define N 2

void preencheMat(int mat[N][N]){
  int i, j;
  for (i=0; i<N; i++){
    for (j=0; j<N; j++){
      printf("Digite o valor da posição %dx%d da matriz: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
}

void escreveMat(int mat[N][N]){
  int i, j;
  for (i=0; i<N; i++){
    for (j=0; j<N; j++){
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

void menu(void){
  printf("\n\nMENU\n\n");
  printf("1 – (A + B)\n");
  printf("2 – (A – B)\n");
  printf("3 – (A x B)\n");
  printf("4 – Fim do programa\n");
}

void somaMat(int matA[N][N], int matB[N][N], int matResultado[N][N]){
  int i, j;
  for (i=0; i<N; i++){
    for (j=0; j<N; j++){
      matResultado[i][j] = matA[i][j] + matB[i][j];
    }
  }
}

void subtrairMat(int matA[N][N], int matB[N][N], int matResultado[N][N]){
  int i, j;
  for (i=0; i<N; i++){
    for (j=0; j<N; j++){
      matResultado[i][j] = matA[i][j] - matB[i][j];
    }
  }
}

void multiplicaMat(int matA[N][N], int matB[N][N], int matResultado[N][N]){
  int i, j, k, temp;
  for (i=0; i<N; i++){
    for (j=0; j<N; j++){
      temp=0;
      for(k = 0; k <N; k++) {
				temp +=  matA[i][k] * matB[k][j];
			}
      matResultado[i][j] = temp;
    }
  }
}

int aa(void){
  int matrizA[N][N], matrizB[N][N], operacao=0, matrizResultado[N][N];

  printf("Preenchendo a primeira matriz:\n");
  preencheMat(matrizA);
  printf("\nPreenchendo a segunda matriz:\n");
  preencheMat(matrizB);

  printf("\n\nImprimindo a matriz A: \n");
  escreveMat(matrizA);
  printf("\nImprimindo a matriz B: \n");
  escreveMat(matrizB);

  menu();
  scanf("%d", &operacao);
  while(operacao != 4){
    printf("\n");

    switch(operacao){
      case 1:
        somaMat(matrizA, matrizB, matrizResultado);
        printf("\nImprimindo a matriz resultado da operação:\n");
        escreveMat(matrizResultado);
        break;

      case 2:
        subtrairMat(matrizA, matrizB, matrizResultado);
        printf("\nImprimindo a matriz resultado da operação:\n");
        escreveMat(matrizResultado);
        break;

      case 3:
        multiplicaMat(matrizA, matrizB, matrizResultado);
        printf("\nImprimindo a matriz resultado da operação:\n");
        escreveMat(matrizResultado);
        break;

      default:
        printf("Operação inválida! Tente novamente\n");
    }
    menu();
    scanf("%d", &operacao);
  }
  return 0;
  }