/*Faça um programa que:
 - Crie uma lista encadeada L com nomes de frutas
 - A lista deve possuir nó cabeça
 - Os nomes devem ser inseridos na lista em ordem crescente até que o usuário digite a palavra ‘fim’
 - A lista não deve possuir nomes repetidos
 - Ao final do programa, imprima a lista
 - Faça funções para buscar, inserir um elemento, imprimir a lista, remover um elemento, apresentar o menu na tela e uma função recursiva para contar os nós da lista
 Após preencher a lista crie um MENU com as opções:

    1 – Insere elemento
    2 – Remove elemento
    3 – Mostra lista
    4 – Informa a quantidade de nós
    5 – Fim do programa
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct NO {
  char info[20];
  struct NO *prox;
}; typedef struct NO lista;

int buscaA14(lista *L, char *elem, lista **pre){
  lista *aux, *preL;
  aux = L->prox;
  preL = L;
  while ((aux != NULL) && strcmp(elem,aux->info)>0) {
    preL = aux;
    aux = aux->prox;
  }
  (*pre) = preL;
  if ((aux != NULL) && (!strcmp(elem,aux->info)))
    return 1;

  return 0;
}

void insereA14(lista *L, char *elem) {
  lista *pre, *el;
  if (!buscaA14(L,elem,&pre)) {
    el = (lista *)malloc(sizeof(lista));
    strcpy(el->info, elem);
    el->prox = pre->prox;
    pre->prox = el;
  }
  else
    printf("Elemento já existe!\n");
}

void removeA14(lista *L, char *elem) {
  lista *pre, *lixo;
  if (buscaA14(L,elem,&pre)) {
    lixo = pre->prox;
    pre->prox = lixo->prox;
    free(lixo);
  }
  else
    printf("Elemento não existe na lista!\n");
}

void mostraLista(lista *L){
  lista *aux;
  aux = L->prox;

  while (aux != NULL){
    printf("%s\n", aux->info);
    aux = aux->prox;
  }
}

int calculaQtdNos(lista *L){
  if (L!=NULL)
    return (1+calculaQtdNos(L->prox));
  else
    return 0;
}

void menuA14(){
  printf("\n\n----- MENU -----\n");
  printf("1 – Insere elemento\n");
  printf("2 – Remove elemento\n");
  printf("3 – Mostra lista\n");
  printf("4 – Informa a quantidade de nós\n");
  printf("5 – Fim do programa\n");
}

int a14ex1(void){
  lista *L;
  char fruta[20];
  int op, qtd;

  L = (lista*) malloc(sizeof(lista));
  L->prox = NULL;

  printf("Digite a fruta que deseja inserir: ");
  scanf("%s", fruta);

  while(strcmp(fruta,"fim")){
    insereA14(L, fruta);
    printf("Digite a fruta que deseja inserir: ");
    scanf("%s", fruta);
  }

  menuA14();
  printf("Digite a operação: ");
  scanf("%d", &op);

  while (op!=5){
    switch(op){
      case 1:
        printf("\nDigite a fruta que deseja inserir: ");
        scanf("%s", fruta);
        insereA14(L, fruta);
        break;
      case 2:
        printf("\nDigite a fruta que deseja remover: ");
        scanf("%s", fruta);
        removeA14(L, fruta);
        break;
      case 3:
        printf("\nImprimindo a lista:\n");
        mostraLista(L);
        break;
      case 4:
        qtd = calculaQtdNos(L->prox);
        printf("Quantidade de elementos = %d", qtd);
        break;
      default:
        printf("Operação não existe!");
    }
    menuA14();
    printf("Digite a operação: ");
    scanf("%d", &op);
  }
  return 0;
} 