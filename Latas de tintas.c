#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Fa�a um programa para uma loja de tintas. O programa dever� pedir o
tamanho em metros quadrados da �rea a ser pintada. Considere que a
cobertura da tinta � de 1 litro para cada 3 metros quadrados e que a
tinta � vendida em latas de 18 litros, que custam R$ 80,00. Informe ao
usu�rio a quantidades de latas de tinta a serem compradas e o pre�o
total.*/

void main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float mt, quant_litros, preco, cob_tinta, quant_latas;
	
	
	printf("Qual o tamanho em metros da �rea a ser pintada? ");
	scanf("%f", &mt); 
	
	cob_tinta = 3;
	quant_litros = mt/cob_tinta; 
	
	printf("\n---------quant_litros = %.2f----------\n", quant_litros);
	
	quant_latas = quant_litros/18;
	
	printf("---------quant_latas = %.2f-------------\n\n", quant_latas);

	
	preco = ceil(quant_latas)*80;

	
	//Resultado
	
	printf("A quantidade de latas de tintas a serem compradas ser�: %.0f\n", ceil(quant_latas));
	printf("O pre�o total da compra ser�: R$%.2f\n\n", preco);
	
	
	
	
	}	
	
	
	
	
	
	





