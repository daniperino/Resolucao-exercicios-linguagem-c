#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um Programa que pergunte quanto você ganha por hora e o número
de horas trabalhadas no mês. Calcule e mostre o total do seu salário no
referido mês, sabendo-se que são descontados 11% para o Imposto de
Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos
dê:
. salário bruto.
a. quanto pagou ao INSS.
b. quanto pagou ao sindicato.
c. o salário líquido.
d. calcule os descontos e o salário líquido, conforme a tabela abaixo:
e. + Salário Bruto : R$
f. - IR (11%) : R$
g. - INSS (8%) : R$
h. - Sindicato ( 5%) : R$
= Salário Liquido : R$
Obs.: Salário Bruto - Descontos = Salário Líquido.*/

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float p_hora, hora, total_bruto, inss, sind, ir, sal_liq;
	
	printf("Quanto você ganha por hora? ");
	scanf("%f", &p_hora);
	
	printf("Quantas horas você trabalha por mês? ");
	scanf("%f", &hora);
	
	total_bruto = p_hora * hora;
	inss = total_bruto * 0.08;
	sind = total_bruto * 0.05;
	ir = total_bruto * 0.11;
	sal_liq = total_bruto - (inss + sind + ir);
	
	printf("\nSeu salário bruto é: R$%.2f", total_bruto);	
	printf("\nVocê pagou para o inss: R$%.2f", inss);
	printf("\nVocê pagou para o sindicato: R$%.2f", sind);
	printf("\nSeu salário liquido é: R$%.2f", sal_liq);
	
	




}
