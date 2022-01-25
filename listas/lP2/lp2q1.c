/* Escreva um programa em C que intercale duas listas simplesmente encadeadas que
guardem números inteiros.
• Não devem ser criados novos nós para a criação da lista intercalada. Os ponteiros
devem ser ajustados para que a lista resultante seja produzida.
• As duas lista L1 e L2 devem possuir a mesma quantidade de nós.
• A lista resultante deverá possuir as mesmas características de L1 e L2 e possuirá o
endereço inicial de L1.
• Exemplo:
L1		->		58		->		20 -> 40 -> 15 -> NULL
L2		->		27		->		31	-> 18	-> 30	-> NULL
Resultado:	L1		->		58 ->	27 -> 20 -> 31 -> 40 -> 18 -> 15 -> 30 -> NULL
Considere	as	listas	simplesmente	encadeadas,	não	circulares	e	sem	nós	cabeça. */

#include <stdio.h>
#include <stdlib.h>

#define N 4

struct NO {
  int info;
  struct NO *prox;
}; typedef struct NO lista;


lista *insereElemFinal(lista *L, int elem) {
	lista *el, *aux, *pre;
  int achou=0;

  aux = L;
  while (aux != NULL && !achou){
    if (aux->info == elem){
      achou = 1;
    }
    pre = aux;
    aux = aux->prox;
  }

	if (!achou) {
		el = (lista *)malloc(sizeof(lista));
		el->info = elem;
		if (L == NULL) {
			el->prox = L;
			L = el;
		} else {
			el->prox = pre->prox;
			pre->prox = el;
		}
	}
	return L;
}

void intercala(lista *L1, lista *L2){
  lista *auxL1, *auxL2, *proxL2;
  int i;
  auxL1 = L1;
  auxL2 = L2;

  for(i=0; i<N; i++){
    proxL2 = auxL2->prox;
    auxL2->prox = auxL1->prox;
    auxL1->prox = auxL2;

    auxL1 = auxL1->prox->prox;
    auxL2 = proxL2;
  }
}

void imprimeIntercalada(lista *L){
  if (L!=NULL){
    imprimeIntercalada(L->prox);
    printf("%d -> ", L->info);
  }
}


int main(void){
  lista *L1, *L2;
  int i, elem;
  
  L1 = NULL;

  L2 = NULL;

  printf("PREENCHENDO L1\n\n");

  for(i=0; i<N; i++){
    printf("Digite o número que deseja inserir: ");
    scanf("%d", &elem);
    L1 = insereElemFinal(L1, elem);
  }

  printf("\n\nPREENCHENDO L2\n\n");

  for(i=0; i<N; i++){
    printf("Digite o número que deseja inserir: ");
    scanf("%d", &elem);
    L2 = insereElemFinal(L2, elem);
  }

  intercala(L1,L2);
  imprimeIntercalada(L1);
}