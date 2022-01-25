/* questão 5 da lista 5*/

#include <stdio.h>
#include <stdlib.h>

#define quantum 2

struct NO {
	int numProcesso, tempoExecucao;
	struct NO *prox;
}; typedef struct NO fila;

void insereProcesso(fila **inicio, fila **fim, int processo, int ut){
	fila *el;
	
	el = (fila*) malloc(sizeof(fila));
	el->numProcesso = processo;
  el->tempoExecucao = ut;
	el->prox = NULL;

	if ((*inicio) == NULL)
		(*inicio) = el;
	else
		(*fim)->prox = el;
	
	(*fim) = el;

}

fila *removeProcesso(fila *inicio){
	fila *lixo;
	
	if (inicio != NULL) {
		lixo = inicio;
		inicio = inicio->prox;
		free(lixo);
	}
return inicio;
}

int a16ex1(void){
  fila *inicio, *fim;
  int proc, tExecucao;

  inicio = NULL;
  fim = NULL;

  printf("Digite o número do processo: ");
  scanf("%d", &proc);

  while(proc >= 0){
    printf("Digite o tempo de execução do processo: ");
    scanf("%d", &tExecucao);
    insereProcesso(&inicio, &fim, proc, tExecucao);
    printf("\nDigite o número do processo: ");
    scanf("%d", &proc);

  }

  while(inicio != NULL){
    printf("\nExecutando processo N%d", inicio->numProcesso);
    inicio->tempoExecucao -= quantum;
    if (inicio->tempoExecucao>0)
      insereProcesso(&inicio, &fim, inicio->numProcesso, inicio->tempoExecucao);
    inicio = removeProcesso(inicio);
  }

  return 1;
}