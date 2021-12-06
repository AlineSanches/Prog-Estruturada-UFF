/* Faça um programa que leia uma cadeia de caracteres em formato de data: DD/MM/AAAA

 Crie uma função que receba esta data como parâmetro e
que retorne o dia, o mês e o ano em três variáveis inteiras
distintas. Escreva os valores retornados no programa
principal.
 Crie um a função que receba o ano como parâmetro e
retorne se a data caiu em um ano bissexto. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void separaDiaMesAno(int *d, int *m, int *a, char *dt){
  char D[3], M[3], A[5];
  strncpy(D, dt, 2);
  D[2] = '\0';
  *d = atoi(D);

  dt = &dt[3]; // o endereço agora é a partir do 3o caractere
  strncpy(M, dt, 2);
  M[2] = '\0';
  *m = atoi(M);

  dt = &dt[3];
  strncpy(A,dt,4);
  A[4] = '\0';
  *a = atoi(A);
}

int ehBissextoa07(a){
  if (a%4 == 0 && (a%400 == 0 || a%100 != 0))
    return 1;
  else
    return 0;
}

int a07ex01(void){
  char data[11];
  int dia, mes, ano;

  do{
    printf("Digite a data:\n");
    scanf("%s", data);
    } while(strlen(data)!=10);

  separaDiaMesAno(&dia, &mes, &ano, data);

  printf("%d, %d, %d", dia, mes, ano);

  if (ehBissextoa07(ano))
    printf("A data %s caiu em um ano bissexto", data);
  else
    printf("A data %s não caiu em um ano bissexto", data);

  return 0;
}