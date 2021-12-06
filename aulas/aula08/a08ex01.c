/* Faça um programa que leia o quadro de cargos e salários de
uma empresa e que calcule a média salarial.
 Crie uma estrutura com os campos cargo e salário
 Serão lidos N cargos e salários
 Ao final do programa escreva os cargos que estão acima da média calculada */

#include <stdio.h>
#include <string.h>

#define N 3

struct tipoEmpregados {
  char cargo[20];
  float salario;
};
typedef struct tipoEmpregados tEmpregados;

void escreveAcimaMedia(tEmpregados *vet, float m){
  int i;
  printf("\n\nSalários acima da média %.2f:\n\n", m);
  for (i=0; i<N; i++){
    if (vet[i].salario > m){
      printf("%s\n", vet[i].cargo);
    }
  }
}

int a08ex01(void){
  int i;
  float somaSalarios=0, mediaSalarios;
  tEmpregados vetEmpregados[N];

  for (i=0; i<N; i++){
    printf("\nDigite o cargo do funcionário %d: ", i+1);
    scanf("%s", vetEmpregados[i].cargo);
    printf("Digite o salario do funcionário %d: ", i+1);
    scanf("%f", &vetEmpregados[i].salario);  

    somaSalarios += vetEmpregados[i].salario;
  }
  mediaSalarios = somaSalarios / N;

  escreveAcimaMedia(vetEmpregados, mediaSalarios);
  return 0;
}