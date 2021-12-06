/* Faça um programa que contenha uma função que receba duas estruturas do tipo dma, cada uma representando uma data
válida, e que devolva o número de anos que decorreram entre as duas datas. */

#include <stdio.h>
#include <string.h>

#define N 2

struct dma {
  int dia; 
  int mes;
  int ano;
}; typedef struct dma tDma;

/*void recebeDatas(tDma *vet){
  int i;
  for(i=0; i<N; i++){
    printf("Digite a data separada por espaços D M A (ex: 10 08 2020");
    scanf("%d %d %d", vet[i].dia, vet[i].mes, vet[i].ano);
  }

}*/

int calculaDias(tDma dataMaior, tDma dataMenor){
  int nAnos;


  return nAnos;
}

int a08ex02(void){
  int i, numAnos;
  tDma data1, data2;

  printf("Digite a data separada por barras (ex: 10/08/2020 da data 1");
  scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
  printf("Digite a data separada por barras (ex: 10/08/2020 da data 2");
  scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

  if (data1.ano > data2.ano)
    numAnos = calculaDias(data1, data2);
  else if(data1.ano < data2.ano)
    numAnos = calculaDias(data2, data1);
  
  printf("%d ano(s) passaram(ou) entre as duas datas", numAnos);

  return 0;
}
