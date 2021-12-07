/* Faça um programa que leia dois vetores X e Y com números reais e escreva na tela as seguintes opções para o usuário:
somar X e Y, subtrair Y de X, pesquisar um elemento em X e Y, mostrar X e Y e finalizar o programa. Devem ser
criadas funções para: somar, subtrair, preencher, mostrar e procurar elemento. */

#define N 4

#include <stdio.h>

void preencheVetorex11(float *vet){
  int i;
  for (i=0; i<N; i++){
    printf("Digite o valor da posição %d do vetor: ", i);
    scanf("%f", &vet[i]);
  }
}

void imprimeMenu(){
  printf("\n ---- MENU ----\n");
  printf("Digite 1 para somar os vetores\n");
  printf("Digite 2 para subtrair os vetores\n");
  printf("Digite 3 para pesquisar um elemento nos vetores\n");
  printf("Digite 4 para mostrar os vetores\n");
  printf("Digite 5 para encerrar o programa\n\n");

}


void soma(float *x, float *y){
  int i;
  for (i=0; i<N; i++){
    printf("%.2f ", x[i]+y[i]);
  }
  printf("\n");
}

void subtrai(float *x, float *y){
  int i;
  for (i=0; i<N; i++){
    printf("%.2f ", x[i]-y[i]);
  }
  printf("\n");
}

int elementoPertence(float elem, float *vet){
  int i;
  for (i=0; i<N; i++){
    if(elem == vet[i])
      return 1;
  }
  return 0;
}

void mostraVetor(float *vet){
  int i;
  for (i=0; i<N; i++){
    printf("%.2f ", vet[i]);
  }
  printf("\n");
}

int lP1ex11(void){
  int operacao=0;
  float vetX[N], vetY[N], elemento;
  printf("\nPreenchendo o vetor X:\n");
  preencheVetorex11(vetX);
  printf("\nPreenchendo o vetor Y:\n");
  preencheVetorex11(vetY);

  while(operacao != 5){
    imprimeMenu();
    scanf("%d", &operacao);
    printf("\n");
    
    switch(operacao){
      case 1:
        soma(vetX, vetY);
        break;

      case 2:
        subtrai(vetX, vetY);
        break;

      case 3:
        printf("Digite um elemento para buscar: ");
        scanf("%f", &elemento);
        if (elementoPertence(elemento, vetX))
          printf("O elemento pertence ao vetor X\n");
        else
          printf("O elemento não pertence ao vetor X\n");
        if (elementoPertence(elemento, vetY))
          printf("O elemento pertence ao vetor Y\n");
        else
          printf("O elemento pertence não ao vetor Y\n");
        break;

      case 4:
        printf("Mostrando o vetor X:\n");
        mostraVetor(vetX);
         printf("\nMostrando o vetor Y:\n");
        mostraVetor(vetY);
        break;
    }
  }
  return 0;
}