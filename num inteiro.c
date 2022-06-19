#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faca um Programa que peca 2 numeros inteiros e um numero real.
Calcule e mostre:
 o produto do dobro do primeiro com metade do segundo .
 a soma do triplo do primeiro com o terceiro.
 o terceiro elevado ao cubo.*/

void main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float num1, num2, num3, form1, form2, form3;
	
	printf("Digite um número inteiro: ");
	scanf("%f", &num1);
	
	printf("Digite um número inteiro: ");
	scanf("%f", &num2);
	
	printf("Digite um número real:");
	scanf("%f", &num3);
	
	form1 = (num1*num1)*(num2/2);
	form2 = (num1*3)+num3;
	form3 = num3*num3*num3;
	
	printf("\nO produto do dobro do primeiro número com a metade do segundo é: %.1f \n\n", form1);
	printf("A soma do triplo do primeiro com o terceiro é: %.1f \n\n", form2);
	printf("O terceiro elevado a 3 é: %.2f", form3);
	
	
	
	
	
	
	
}

