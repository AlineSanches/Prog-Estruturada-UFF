#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct aluno{
  char mat[7];
  char nome[40];
  float CR;
  int trancados;
}; typedef struct aluno tAluno;

void preenche(tAluno *vet, int qtd){
  int i;
  for(i=0; i<qtd; i++){
    printf("\n\nDigite a matrícula do aluno %d: ", i+1);
    scanf(" %s", vet[i].mat);

    printf("Digite o nome do aluno %d: ", i+1);
    scanf(" %s", vet[i].nome);
    
    printf("Digite o CR do aluno %d: ", i+1);
    scanf("%f", &vet[i].CR);

    printf("Digite a quantidade de períodos que o aluno %d trancou: ", i+1);
    scanf("%d", &vet[i].trancados);
  }
}

void imprime(tAluno *vet, int qtd){
  int i;
    for(i=0; i<qtd; i++){
      printf("\n\nDados do aluno %d: ", i+1);
      printf("\nMatrícula: %s", vet[i].mat);
      printf("\nNome: %s", vet[i].nome);
      printf("\nCR: %.1f", vet[i].CR);
      printf("\nPeríodos trancados: %d", vet[i].trancados);
    }
}

float achaMaiorCr(tAluno *v, int qtd, int i){
  int j;
  float maior=0;
  for(j=i; j<qtd; j++){
    if(v[j].CR > maior){
      maior = v[j].CR;
    }
  }
  return maior;
}

void ordena(tAluno *vet, int qtd){
  int i, j, q=0, posMaior[qtd];
  float maior;
  tAluno maioresCRs[qtd], temp;
  for(i=0; i<qtd; i++){
    maior = achaMaiorCr(vet, qtd, i);
    for (j=0; j<qtd; j++){
      if (vet[j].CR==maior){
        maioresCRs[q] = vet[j];
        posMaior[q] = j;
        q+=1;
      }
    }
      temp = vet[qtd-i-1];
      vet[qtd-i-1] = maioresCRs[0];
      vet[posMaior[0]] = temp;
    
  }
}

int jubila(tAluno *vet, int qtd){
  int i, semAtual, anoAtual, semEAnoInt, sem, ano, qtdJubilados=0, semNoAno=0, qtdPeriodos;
  char semEAno[4];
  printf("\n\nDigite o semestre e o ano atual, separado por espaço: ");
  scanf("%d %d", &semAtual, &anoAtual);
  anoAtual = anoAtual%1000;
  for(i=0; i<qtd; i++){
      strncpy(semEAno,vet[i].mat,3);
      semEAnoInt = atoi(semEAno);
      sem = semEAnoInt/100;
      ano = semEAnoInt % 100;
      if (sem==1){
        qtdPeriodos = (anoAtual-ano)*2 + (semAtual-1);
      }
      else{
        qtdPeriodos = (anoAtual-ano)*2 - 1 + (semAtual-1);
      }
      if((qtdPeriodos-vet[i].trancados)> 10)
        qtdJubilados += 1;
      
    }
  return qtdJubilados;
}

int p1q2(void){
  int qtd, alunosJubilados;
  
  do{
    printf("Digite a quantidade de alunos que deseja ordenar (>0): ");
    scanf("%d", &qtd);
  }while(qtd<=0);

  tAluno vetAlunos[qtd];

  preenche(vetAlunos, qtd);
  //imprime(vetAlunos, qtd);
  //ordena(vetAlunos, qtd);
  imprime(vetAlunos, qtd);
  alunosJubilados = jubila(vetAlunos, qtd);
  printf("\nHá %d aluno(s) em situação de jubilamento\n", alunosJubilados);

  return 0;
}