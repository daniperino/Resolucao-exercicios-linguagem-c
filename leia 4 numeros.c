#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Fa�a um programa que leia 4 n�meros inteiros e apresente:
Maior n�mero par
Menor n�mero �mpar
Diferen�a entre eles*/

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, i, maior_par, menor_impar, dif;
	
	maior_par = 0;
	menor_impar = 0;
	
	printf("Digite 4 n�meros inteiros: ");
		
		for(i = 1; i <=4; i++){
			
	scanf("%d", &num);
	
	if(num % 2 == 0){ // verifica se o n�mero � par
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
	printf("Maior n�mero par: %d \n", maior_par);
	printf("Menor n�mero impar: %d \n", menor_impar);
	printf("Diferen�a entre eles: %d \n", dif);

	
	

	
	
	
	
}
