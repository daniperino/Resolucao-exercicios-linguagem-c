#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Tendo como dados de entrada a altura (h) de uma pessoa, construa um
algoritmo que calcule seu peso ideal, usando a seguinte formula:
Para homens: (72.7*h) - 58
 Para mulheres: (62.1*h) - 44.7 */
 
void main(){
	setlocale(LC_ALL, "Portuguese");
	
	 float alt, pesoideal;
	 char sexo;
	 
	 printf("Qual seu sexo M/F? ");
	 scanf("%c", &sexo);
	 
	 printf("Digite seu altura: ");
	 scanf("%f", &alt);
	 
	 if
	 ((sexo == "M") || (sexo == "m")){
	 	pesoideal = (72.7 * alt) - 58;
	 }
	 
	 else{
    	pesoideal = (62.1 * alt) - 44.7;

	 }
	 //Resultado
	 printf("Seu peso ideal é: %.1fkg", pesoideal);
}
	 
	 
