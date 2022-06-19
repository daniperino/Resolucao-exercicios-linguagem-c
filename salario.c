#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero
de horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no
referido m�s, sabendo-se que s�o descontados 11% para o Imposto de
Renda, 8% para o INSS e 5% para o sindicato, fa�a um programa que nos
d�:
. sal�rio bruto.
a. quanto pagou ao INSS.
b. quanto pagou ao sindicato.
c. o sal�rio l�quido.
d. calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:
e. + Sal�rio Bruto : R$
f. - IR (11%) : R$
g. - INSS (8%) : R$
h. - Sindicato ( 5%) : R$
= Sal�rio Liquido : R$
Obs.: Sal�rio Bruto - Descontos = Sal�rio L�quido.*/

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float p_hora, hora, total_bruto, inss, sind, ir, sal_liq;
	
	printf("Quanto voc� ganha por hora? ");
	scanf("%f", &p_hora);
	
	printf("Quantas horas voc� trabalha por m�s? ");
	scanf("%f", &hora);
	
	total_bruto = p_hora * hora;
	inss = total_bruto * 0.08;
	sind = total_bruto * 0.05;
	ir = total_bruto * 0.11;
	sal_liq = total_bruto - (inss + sind + ir);
	
	printf("\nSeu sal�rio bruto �: R$%.2f", total_bruto);	
	printf("\nVoc� pagou para o inss: R$%.2f", inss);
	printf("\nVoc� pagou para o sindicato: R$%.2f", sind);
	printf("\nSeu sal�rio liquido �: R$%.2f", sal_liq);
	
	




}
