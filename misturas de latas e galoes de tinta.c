#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* Fa�a um Programa para uma loja de tintas. O programa dever� pedir o
tamanho em metros quadrados da �rea a ser pintada. Considere que a
cobertura da tinta � de 1 litro para cada 6 metros quadrados e que a
tinta � vendida em latas de 18 litros, que custam R$ 80,00 ou em gal�es
de 3,6 litros, que custam R$ 25,00.
   Informe ao usu�rio as quantidades de tinta a serem compradas e
os respectivos pre�os em 3 situa��es:
- comprar apenas latas de 18 litros;
- comprar apenas gal�es de 3,6 litros;
- misturar latas e gal�es, de forma que o desperd�cio de tinta seja
menor. Acrescente 10% de folga e sempre arredonde os valores
para cima, isto �, considere latas cheias.*/


void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float mt, cob_tinta, preco_lata, preco_galao, quant_litros, quant_lata, quant_galao, preco18, preco36;
	float quant_folga, total_latas, total_galao, total_latas_int, valor_total;
	
	printf("Qual a metragem do local a ser pintado? ");
	scanf("%f", &mt);
	
	cob_tinta = 6;
	preco_lata = 80;
	preco_galao = 25;
	quant_litros = mt / cob_tinta;
	quant_lata = quant_litros / 18;
	quant_galao = quant_litros / 3.6;
	preco18 = ceil(quant_lata) * 80;
	preco36 = ceil(quant_galao) * 25;
	
		printf("\n==========LATAS DE 18 LITROS==========\n");
	
	printf("\n-----Quant_litros - %.1f-----", quant_litros);
	printf("\n-----Quant_lata - %.1f-----\n\n", quant_lata);
		
	printf("A quantidade de latas a serem compradas ser� de %.0f\n", ceil(quant_lata));
	printf("O pre�o total das latas ser� de R$%.2f\n\n", preco18);
	
		printf("\n==========GAL�ES DE 3,6 LITROS==========\n");
	
	printf("\n-----Quant_litros - %.1f-----", quant_litros);
	printf("\n-----Quant_galao - %.1f-----\n\n", quant_galao);
		
	
	printf("A quantidade de gal�es a serem comprados ser� de %.0f\n", ceil(quant_galao));
	printf("O pre�o total dos gal�es ser� de R$%.2f\n\n", preco36);
	
		printf("\n==========GAL�ES E LATAS==========\n");
	
	quant_folga = quant_litros * 1.1;	//folga de 10%
	
	printf("\nTotal de litros com foga de 10%%: %.2f\n", quant_folga);
	
	total_latas = quant_folga / 18;
	
	printf("total latas e gal�es: %.2f\n", total_latas);
	
	total_latas_int = abs(total_latas); // pega a parte inteira
	total_galao = total_latas - total_latas_int; // pega a parte fracionada
	
	printf("\nTotal de latas inteiras: %.0f\n", total_latas_int);
	printf("Total gal�es: %.0f\n", ceil(total_galao));
	
	valor_total = (total_latas_int * 80) + (ceil(total_galao)* 25);
	
	printf("Valor total da compra de latas e gal�es � de R$%.2f\n\n", valor_total);
	
	
	
	
		
		

	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

