//* Ler 20 números inteiros e depois imprimí-los na ordem contrária em que foram lidos. *//

#include <stdio.h>

#define TAM 5

void imprimeContrario(int *v){
  int i;
  for(i=TAM-1; i>=0; i--)
    printf("%d\n", v[i]);
}


int a06ex01(void){
  int i, vetorNums[TAM];

  for(i=0; i<TAM; i++){
    printf("Digite um número: ");
    scanf("%d", &vetorNums[i]);
  }

  imprimeContrario(vetorNums);

  return 0;
}