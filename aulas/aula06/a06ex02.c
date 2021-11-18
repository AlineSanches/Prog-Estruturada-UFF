//* Ler N notas dos alunos de uma turma e calcular a média. Ao final imprimir a 
// quantidade de alunos que ficou acima da média calculada. *//

#include <stdio.h>

int calculaAlunosAcima(int *v, float m, int t){
  int i, qtdAcimaMedia = 0;
  for(i=0; i<t; i++){
    if (v[i]>m)
      qtdAcimaMedia++;
  }
  return qtdAcimaMedia;
}

int a06ex02(void){
  int i, tam, soma=0;
  float media;

  printf("Digite a quantidade de notas: ");
  scanf("%d", &tam);

  int vetorNotas[tam];

  for(i=0; i<tam; i++){
    printf("Digite a nota du alune %d: ", i+1);
    scanf("%d", &vetorNotas[i]);
    soma += vetorNotas[i];
  }

  media = soma/tam;

  printf("\n%d alunos ficaram acima da média %.2f\n", calculaAlunosAcima(vetorNotas, media, tam), media);

  return 0;
}