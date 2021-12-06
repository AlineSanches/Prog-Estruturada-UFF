/* Faça um programa que leia um conjunto de dados sobre os N alunos de uma turma. Para cada aluno será lido o seu
nome, suas 4 notas e seu ano de ingresso na faculdade. O programa deve calcular a média de cada aluno e indicar o
nome do aluno que obteve a maior média (é possível que existam vários alunos). Deve ser usado um vetor de
estruturas. */

#include <stdio.h>
#include <string.h>


struct tipoAluno{
  char nome[20];
  float notas[4], media;
  int anoIngresso;
}; typedef struct tipoAluno tAluno;

float preencheVetERetornaMaiorMedia(int n, tAluno *vet){
  int i, j;
  float maior=0;
  for(i=0; i<n; i++){
    float soma=0;
    printf("\n\nDigite o nome do aluno %d: ", i+1);
    scanf(" %s", vet[i].nome);
    for (j=0; j<4; j++){
      printf("Digite a nota %d do aluno %d: ", j+1, i+1);
      scanf("%f", &vet[i].notas[j]);
      soma += vet[i].notas[j];
    }
    printf("Digite o ano de ingresso do aluno %d: ", i+1);
    scanf("%d", &vet[i].anoIngresso);
    
    vet[i].media = soma/4;
    if (vet[i].media > maior)
      maior = vet[i].media;
  }
  return maior;
}

void imprimeMaioresMedias(int n, tAluno *vet, float m){
  int i;
  printf("\n--- ALUNO(S) COM A MAIOR MÉDIA (%.2f) ---", m);
  for(i=0; i<n; i++){
    if (vet[i].media == m)
      printf("\n%s", vet[i].nome);
  }

}

int lP1ex10(void){
  int qtd;
  float maiorMedia;
  printf("Digite a quantidade de alunos da turma: ");
  scanf("%d", &qtd);
  tAluno vetAlunos[qtd];
  maiorMedia = preencheVetERetornaMaiorMedia(qtd, vetAlunos);

  imprimeMaioresMedias(qtd, vetAlunos, maiorMedia);
  return 0;
}