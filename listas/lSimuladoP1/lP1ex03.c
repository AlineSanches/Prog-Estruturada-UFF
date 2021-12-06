/* Escreva um programa para o seguinte problema: determinar se uma palavra A ocorre dentro de uma cadeia de
caracteres B, mesmo que de forma não contígua. Fazer uma função que retorne 1 se A ocorrer dentro de B e zero,
caso contrário. Exemplo:
A = "lanterna"
B = "No dia mais claro, na noite mais densa, o mal sucumbirá ante a minha presença."
Resposta: A ocorre dentro de B:
No dia mais claro, na noite mais densa, o mal sucumbirá ante a minha presença.*/

#include <stdio.h>
#include <string.h>

int letraEstaContidaEmB(char l, char *vetB){
  int j;
  int tB = strlen(vetB);
  for (j=0; j<tB; j++){
    //printf("%c\n", vetB[j]);
    if (l==vetB[j]){
      return j+1;
      }
    }
  return 0;
}

int AEstaContidaEmB(char *A, char *B){
  int tamA, tamB, i, j, posQueOcorre;
  char letra;
  tamA = strlen(A);
  tamB = strlen(B);
  if (tamA>tamB)
    return 0;
  for (i=0; i<tamA; i++){
    letra = A[i];
    //printf("procurando %c", letra);
    posQueOcorre = letraEstaContidaEmB(letra, B);
    if(!posQueOcorre)
       return 0;
    else
      B = &B[posQueOcorre];
  }
  return 1;
}

int lP1ex03(void){
  //int ;
  char palavra[40], frase[200];
  printf("Digite A: ");
  fgets(palavra, 40, stdin);
  printf("Digite B: ");
  fgets(frase, 200, stdin);

  if (AEstaContidaEmB(palavra, frase))
    printf("\nA ocorre dentro de B\n");
  else
    printf("\nA não ocorre dentro de B\n");
  return 0;
}