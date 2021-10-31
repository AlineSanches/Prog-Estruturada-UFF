//* João recebeu seu salário e precisa pagar duas contas atrasadas. Como as contas estão
//atrasadas, João deverá pagar uma multa de 2% sobre cada uma. Faça um programa que leia o
//valor do salário de João e das contas que ele deve pagar, e que mostre quanto restará do seu
//salário após o pagamento das contas. *//

#include <stdio.h>

int l0ex06(void){
  float sal, conta1, conta2, salFinal;
  printf("Digite seu salário: ");
  scanf("%f", &sal);
  printf("Digite o valor da primeira conta: ");
  scanf("%f", &conta1);
  printf("Digite o valor da segunda conta: ");
  scanf("%f", &conta2);

  salFinal = sal - conta1*1.02 - conta2*1.02;

  printf("Restará R$%.2f do seu salário após o pagamento das contas.\n", salFinal);
  return 0;
}