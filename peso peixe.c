#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Jo�o Papo-de-Pescador, homem de bem, comprou um
microcomputador para controlar o rendimento di�rio de seu trabalho.
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo
regulamento de pesca do estado de S�o Paulo (50 quilos) deve pagar
uma multa de R$ 4,00 por quilo excedente. Jo�o precisa que voc� fa�a
um programa que leia a vari�vel peso (peso de peixes) e calcule o
excesso. Gravar na vari�vel excesso a quantidade de quilos al�m do
limite e na vari�vel multa o valor da multa que Jo�o dever� pagar.
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
		printf("\nO valor da multa ser� de %.2f", multa);
	}
		
	else{
		printf("\nN�o precisa pagar multa");
		}
		
	}	
	

