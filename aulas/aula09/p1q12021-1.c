#include <stdio.h>

#define N 3

int calculaProdDiagSecundaria(int mat[N][N]){
  int prod=1, i;
  for (i=0; i<N; i++){
    prod *= mat[i][N-1-i];
  }

  return prod;
}

int calculaSomaAcimaDiagPrincipal(int mat[N][N]){
  int soma=0, i, j;
  for (i=0; i<N; i++){
    for (j=i+1; j<N; j++){
      soma += mat[i][j];
    }
  }

  return soma;
}

int ehPrimo(int val){
  int div;
  if (val==1)
    return 0;
  for (div=2; div<=(val/2); div++){
    if (val%div == 0)
      return 0;
  }
  return 1;
}

int calculaQtdNumerosPrimos(int mat[N][N]){
  int qtd=0, i, j;
  for (i=0; i<N; i++){
    for (j=0; j<N; j++){
      if (ehPrimo(mat[i][j]))
        qtd += 1;
    }
  }

  return qtd;
}

void imprimeParesMenoresQueMaior(n){
  if (n>0){
    printf("%d ", n);
    imprimeParesMenoresQueMaior(n-2);
  }
}

int p1q120211(){
  int i, j, matriz[N][N], prodDiagSecundaria, somaElemsAcimaDiagPrincipal, qtdNumerosPrimos, maior=0;

  for (i=0; i<N; i++){
    for (j=0; j<N; j++){
      printf("Digite o valor da posição %dx%d da matriz: ", i, j);
      scanf("%d", &matriz[i][j]);
      if (matriz[i][j] > maior)
        maior = matriz[i][j];
    }
  }

  printf("\n\n------ Imprimindo a matriz ------\n\n");
  for (i=0; i<N; i++){
    for (j=0; j<N; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }


  prodDiagSecundaria = calculaProdDiagSecundaria(matriz);
  printf("\n\nO produto dos elementos da diagonal secundária é %d", prodDiagSecundaria);

  somaElemsAcimaDiagPrincipal = calculaSomaAcimaDiagPrincipal(matriz);
  printf("\n\nA soma dos elementos acima da diagonal principal é %d", somaElemsAcimaDiagPrincipal);

  qtdNumerosPrimos = calculaQtdNumerosPrimos(matriz);
  printf("\n\nA matriz possui %d elementos primos", qtdNumerosPrimos);

  if (maior%2!=0)
    maior -= 1;
  else
    maior -= 2;
  printf("\n\nImprimindo números pares positivos menores do que o maior elemento da matriz: \n");
  imprimeParesMenoresQueMaior(maior);

  return 0;
}