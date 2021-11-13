//* Faça uma função que calcule o quociente da divisão de A por B, utilizando subtrações sucessivas. *//

#include <stdio.h>

int quocientea05(int a, int b){
  if (a-b < 0)
    return 0;
  else 
    return (1 + quocientea05(a-b, b));
}

int a05ex03(void){
  int A, B;
  
  printf("Digite um valor para A: ");
  scanf("%d", &A);

  do{
  printf("Digite um valor para B (<A): ");
  scanf("%d", &B);
  } while (B>=A);

  printf("\nO quociente da divisão de %d por %d é %d\n", A, B, quocientea05(A, B));


  return 0;
}