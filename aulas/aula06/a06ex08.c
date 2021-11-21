/* Faça um programa que leia uma cadeia de caracteres em formato de data: DD/MM/AAAA
 • Crie uma função que receba esta data como parâmetro e que retorne o ano em uma variável inteira.
 • Crie um a função que receba o ano como parâmetro e retorne se a data caiu em um ano bissexto. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int pegaAnoData(char *dt){
  int ano;
  char A[5];
  A[0] = dt[6];
  A[1] = dt[7];
  A[2] = dt[8];
  A[3] = dt[9];
  A[4] = '\0';
  ano = atoi(A);
  return ano;

  /* MANEIRA MAIS SOFISTICADA
  dataNasc = &dataNasc[6]; -> dataNasc é dataNasc a partir do 6o caractere
  strncpy(A,dataNasc,4);
  A[4] = '\0';
  ano = atoi(A);


  */
}

int ehBissexto(a){
  if (a%4 == 0 && (a%400 == 0 || a%100 != 0))
    return 1;
  else
    return 0;
}

int main(void){
  char data[11];
  int ano;

  do{
    printf("Digite a data:\n");
    scanf("%s", data);
    } while(strlen(data)!=10);

  ano = pegaAnoData(data);
  if (ehBissexto(ano))
    printf("A data %s caiu em um ano bissexto", data);
  else
    printf("A data %s não caiu em um ano bissexto", data);

  return 0;
}
