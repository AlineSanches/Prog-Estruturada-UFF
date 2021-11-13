//* Faça um programa que leia o preço de um produto, calcule o seu aumento e mostre a sua classificação. 
// • Se o preço for menor ou igual a 50, o produto receberá um aumento de 5%
// • Se o preço for maior do que 50 e menor ou igual a 100, o aumento será de 10%
//• Se o preço for maior do que 100, o aumento será de 15%
// A classificação do produto deve ser:
// • Barato: até 80 reais (inclusive)
// • Normal: entre 80 reais e 120 reais (inclusive)
// • Caro: entre 120 reais e 200 reais (inclusive)
// • Muito Caro: maior do que 200 reais *//


#include <stdio.h>

int l1ex04(void){
  float preco;
  
  printf("Insira o preço\n");
  scanf("%f", &preco);
  if (preco <= 50)
    preco += preco*0.05;
  else
    if (preco <= 100)
      preco += preco*0.1;
    else
      preco += preco*0.15;   

  if (preco <= 80)
    printf("\nO preço ficou R$%.2f e a categoria é barata", preco);
  else
    if (preco <= 120)
    printf("\nO preço ficou R$%.2f e a categoria é normal", preco);
    else
      if (preco <= 200)
        printf("\nO preço ficou R$%.2f e a categoria é caro", preco);
      else
        printf("\nO preço ficou R$%.2f e a categoria é muito caro", preco);
        
  return 0;
}