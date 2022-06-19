#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*João Papo-de-Pescador, homem de bem, comprou um
microcomputador para controlar o rendimento diário de seu trabalho.
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo
regulamento de pesca do estado de São Paulo (50 quilos) deve pagar
uma multa de R$ 4,00 por quilo excedente. João precisa que você faça
um programa que leia a variável peso (peso de peixes) e calcule o
excesso. Gravar na variável excesso a quantidade de quilos além do
limite e na variável multa o valor da multa que João deverá pagar.
Imprima os dados do programa com as mensagens adequadas.*/

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	float peso, exc, multa, pesolimite;
	pesolimite = 50;	
	
	printf("Qual o peso total dos peixes pescados no dia de hoje? ");
	scanf("%f", &peso);
	
		
	if
	(peso > pesolimite){
	exc = peso - pesolimite;
	multa = exc * 4;		
		printf("\nO valor da multa será de %.2f", multa);
	}
		
	else{
		printf("\nNão precisa pagar multa");
		}
		
	}	
	

