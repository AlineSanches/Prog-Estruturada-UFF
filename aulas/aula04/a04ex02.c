//* //* Faça um programa imprima na tela um Menu que permita o usuário escolher as seguintes operações: +, -, /, *.
// - Se um operador inválido for digitado deve ser impresso um erro
// - Se o usuário digitar ! o programa deve ser finalizado
// - Se o usuário escolher uma das quatro operações, o programa deve ler dois números reais e efetuá-los
// - Faça funções para escrever o Menu, realizar a operação e verificar se o operador é válido *//

#include <stdio.h>

void escreveMenu(){
  printf("\n-- MENU --\n");
  printf("+: soma\n");
  printf("-: subtração\n");
  printf("/: divisão\n");
  printf("*: multiplicação\n");
  printf("!: encerra o programa\n");
  printf("==> ");

}

int checaValOp(char op){
  if (op == '+' || op == '-' || op == '/' || op == '*')
    return 1;

  else {
    printf("\n\nErro! Essa operação não existe!\n");
    return 0;
  }
}

void operacao(char op, float a, float b){
  switch (op){
    case '+':
      printf("\nSOMA: %.2f\n", a+b);
      break;
    case '-':
      printf("\nSUBTRAÇÃO: %.2f\n", a-b);
      break;
    case '*':
      printf("\nMULTIPLICAÇÃO: %.2f\n", a*b);
      break;
    case '/':
      if (b != 0)
        printf("\nDIVISÃO: %.2f\n", a/b);
      else
        printf("Essa divisão não pode ser realizada");
      break;
  }
}


int a04ex02(void){
  char operador;
  float a, b;

  escreveMenu();
  scanf(" %c", &operador);

  while (operador != '!'){
    if (checaValOp(operador)){
      printf("\nDigite um valor para A: ");
      scanf("%f", &a);

      printf("\nDigite um valor para B: ");
      scanf("%f", &b);
      operacao(operador, a, b);
    }
    escreveMenu();
    scanf(" %c", &operador);
  }
  

  return 0;
}