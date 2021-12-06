/* Em uma competição de ginástica olímpica a nota é determinada por um painel de seis juízes. Cada um dos juízes
atribui uma nota entre zero e dez para o desempenho do atleta. Para calcular a nota final, a nota mais alta e a nota
mais baixa são descartadas e é calculada a média das quatro restantes. Escreva um programa que leia 6 notas entre
zero e dez e calcule a média, de cada um dos 30 atletas, após o descarte da maior e da menor nota. Faça uma função
que receba as seis notas lidas e que retorne para o programa principal a média calculada. */

#include <stdio.h>

#define N 4 // quantidade de notas/ juízes
#define A 3 // quantidade de atletas

struct tipoAtleta{
  char nome[40];
  float media;
}; typedef struct tipoAtleta tAtleta;

float calculaMediaNotas(float *vet){
  int i;
  float soma=0, maior=0, menor=10;
  for(i=0; i<N; i++){
    soma += vet[i];

    if(vet[i]>maior)
      maior = vet[i];
    if(vet[i]<menor)
      menor = vet[i];
  }
  soma -= (maior + menor);
  return (soma/(N-2));
}

void imprimeResultado(tAtleta *atletas){
  int i;
  printf("\n\n----- TABELA -----\n");
  for (i=0; i<A; i++){
    printf("\nAtleta: %s - média: %.2f", atletas[i].nome, atletas[i].media);
  }
}

int lP1ex02(void){
  int i, j;
  float vetNotas[N], nota;
  tAtleta vetAtletas[N];

  for(i=0; i<A; i++){
    printf("Insira o nome do atleta %d: ", i+1);
    scanf("%s", vetAtletas[i].nome);

    for(j=0; j<N; j++){
      do{
        printf("Insira a nota do juiz %d para e atleta %s: ", j+1, vetAtletas[i].nome);
        scanf("%f", &nota);
      } while (nota<0 || nota>10);
      vetNotas[j] = nota;
    }

    vetAtletas[i].media = calculaMediaNotas(vetNotas);
    printf("\n\n");
  }

  imprimeResultado(vetAtletas);
  return 0;
}