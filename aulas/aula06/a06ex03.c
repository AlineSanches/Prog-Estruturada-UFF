//* Preencher 2 vetores de X posições cada, com números inteiros. Fazer uma função que receba os dois vetores
// como parâmetros e que retorne a quantidade de posições que possuem números distintos. *//

#include <stdio.h>

void preencheVetor(int *v, int t, char *nomeVetor){
  int  i;
  printf("\nPreenchendo o vetor %s\n", nomeVetor);
  for (i=0; i<t; i++){
    printf("Digite um valor: ");
    scanf("%d", &v[i]);
  }
}

int comparaVetor(int *v1, int *v2, int t){
  int i, qtd=0;
  
  for (i=0; i<t; i++){
    // printf("v1:%d e v2:%d\n", v1[i], v2[i]);
    if (v1[i] != v2[i])
      qtd++;
  }
  return qtd;
}

int a06ex03(void){
  int tam;
  printf("Digite a quantidade de posições dos vetores: ");
  scanf("%d", &tam);
  int vetorA[tam];
  int vetorB[tam];

  preencheVetor(vetorA, tam, "A");
  preencheVetor(vetorB, tam, "B");

  printf("\nHá %d posições com números distintos nos 2 vetores\n", comparaVetor(vetorA, vetorB, tam));
  return 0;
}