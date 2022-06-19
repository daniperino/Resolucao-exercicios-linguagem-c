#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que leia 4 números inteiros e apresente:
Maior número par
Menor número ímpar
Diferença entre eles*/

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, i, maior_par, menor_impar, dif;
	
	maior_par = 0;
	menor_impar = 0;
	
	printf("Digite 4 números inteiros: ");
		
		for(i = 1; i <=4; i++){
			
	scanf("%d", &num);
	
	if(num % 2 == 0){ // verifica se o número é par
		if(num > maior_par){ // verifica o maior par
			maior_par = num; //guarda o maior par
		}	
	}	
	
	else{
		if(menor_impar == 0){
			menor_impar = num;
		}
		else if(num < menor_impar){
		menor_impar = num;	
		}
	}
		
	}
	dif = maior_par - menor_impar;

	//Resultados
	printf("Maior número par: %d \n", maior_par);
	printf("Menor número impar: %d \n", menor_impar);
	printf("Diferença entre eles: %d \n", dif);

	
	

	
	
	
	
}
