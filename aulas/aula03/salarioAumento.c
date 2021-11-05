//* Calcular o salário de um funcionário sabendo que ele foi contratado por 1000 reais 
// em 1995 e que no ano seguinte recebeu um aumento de 0.1%. A partir daí, em cada ano
// o funcionário recebeu um percentual de aumento do dobro do ano anterior. *//

#include <stdio.h>

int salarioAumento(void){
  int ano;
  float aumento = 0.001;
  double salario = 1000.0;

  for (ano=1996; ano<=2021; ano++){
    salario += salario*aumento;
    printf("Ano: %d \t Aumento: %.2f%% - Salário: R$%.2f\n", ano, aumento*100, salario);
    aumento *= 2;
  }

  return 0;
}