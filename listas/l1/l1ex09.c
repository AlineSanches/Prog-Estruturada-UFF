/* A prefeitura da “Terra do Nunca” vai realizar suas eleições em urnas eletrônicas, sendo 3 os candidatos
à prefeitura (Capitão Gancho, Peter Pan e Wendy). Elabore um programa que permita ao usuário
informar o número de votos de cada um dos candidatos, escrevendo em seguida o resultado da eleição.
Sabe-se que, caso um dos candidatos tenha mais de 50% dos votos ele é eleito sem necessidade
de segundo turno. Na “Terra do Nunca” não existem votos nulos ou brancos. */

#include <stdio.h>
#include <string.h>

void imprimeResultadoex09(vGancho, vPeter, vWendy){
  printf("\n\n--- RESULTADO ---\n");
  printf("Capitão Gancho: %d\nPeter Pan: %d\nWendy: %d\n", vGancho, vPeter, vWendy);
}

void segundoTurno(char *a, char *b){
  int vA, vB;
  printf("\n\n--- SEGUNDO TURNO ----\n");
  printf("Digite a quantida de votos para %s: ", a);
  scanf("%d", &vA);
  printf("\nDigite a quantida de votos para %s: ", b);
  scanf("%d", &vB);

  if (vA ==  vB)
    printf("\nHouve empate no segundo turno!\n");
  else{
    printf("\n\n--- RESULTADO ---\n");
    printf("%s: %d\n%s: %d\n", a, vA, b, vB);
  }
}

int l1ex09(void){
  int votosGancho, votosPeter, votosWendy, totalVotos;
  char vencedor[15];
  printf("Digite a quantida de votos para o Capitão Gancho: ");
  scanf("%d", &votosGancho);
  printf("\nDigite a quantida de votos para o Peter Pan: ");
  scanf("%d", &votosPeter);
  printf("\nDigite a quantida de votos para a Wendy: ");
  scanf("%d", &votosWendy);

  totalVotos = votosGancho + votosPeter + votosWendy;
  if (votosGancho > totalVotos/2 || votosPeter > totalVotos/2 || votosWendy > totalVotos/2){
    imprimeResultadoex09(votosGancho, votosPeter, votosWendy);
  }
  else if (votosWendy < votosGancho && votosWendy < votosPeter){
    segundoTurno("Peter Pan", "Capitão Gancho");
  }
  else if (votosGancho < votosWendy && votosGancho < votosPeter){
    segundoTurno("Peter Pan", "Wendy");
  }
  else if (votosPeter < votosWendy && votosPeter < votosGancho){
    segundoTurno("Capitão Gancho", "Wendy");
  }
  else{
    printf("\nHouve empate no primeiro turno!\n");
  }

  return 0;
}