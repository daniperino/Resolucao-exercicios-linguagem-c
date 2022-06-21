#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

SP – R$67.836,43
RJ – R$36.678,66
MG – R$29.229,88
ES – R$27.165,48
Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação 
que cada estado teve dentro do valor total mensal da distribuidora.*/
 
 
 void main(){
 	
 	setlocale(LC_ALL, "Portuguese");
 
 float sp, rj, mg, es, outros, total;
 	
sp = 67836.43;
rj = 36678.66;
mg = 29229.88;
es = 27165.48;
outros = 19849.53;

total = 100/(sp+rj+mg+es+outros);

//Resultado

printf("Valores em reais de cada localidade: \n SP - R$67.836,43 \n RJ - R$36.678,66 \n MG - R$29.229,88 \n ES - R$27.165,48 \n Outros estados - R$19.849,53\n\n");
printf("O estado de São Paulo tem %.2f%% do valor total mensal da distribuidora.\n\n", total*sp);
printf("O estado do Rio de Janeiro tem %.2f%% do valor total mensal da distribuidora.\n\n", total*rj);
printf("O estado de Minas Gerais tem %.2f%% do valor total mensal da distribuidora.\n\n", total*mg);
printf("O estado do Espírito Santos tem %.2f%% do valor total mensal da distribuidora.\n\n", total*es);
printf("Outros estados tem %.2f%% do valor total mensal da distribuidora.\n", total*outros);
 	
 }
