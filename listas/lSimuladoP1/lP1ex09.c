/* Escreva um programa que gere a tabuada de 1 até um valor n>0 na forma de uma tabela tal que, na posição da linha i e
coluna j da tabela, deve-se encontrar o valor i*j.
A tabuada deve ser guardada em uma matriz, e após a sua criação o programa deve dar ao usuário a opção de
escolher um número X e ter a sua tabuada impressa. O programa encerra quando o usuário digitar um número negativo. */

#include <stdio.h>

int lP1ex09(void){
  int num, x, i, j;

  printf("Digite o número de linhas/ colunas da matriz tabuada: ");
  scanf("%d", &num);
  int tabuada[num][num];

  for (i=0; i<num; i++){
    for (j=0; j<num; j++){
      tabuada[i][j] = (i+1)*(j+1);
    }
  }

  printf("\nDigite o número do qual quer ver a tabuada: ");
  scanf("%d", &x);
  while (x>0){
    for (i=0; i<num; i++){
      printf("%d ", tabuada[x-1][i]);
    }
    printf("\n\nDigite o número do qual quer ver a tabuada: ");
    scanf("%d", &x);
  }
  return 0;
}