#include <stdio.h>
#include <locale.h>
#include <math.h>
/*Crie um programa que solicita e lê o peso e a altura de uma pessoa e apresenta seu IMC com duas casas decimais
após a vírgula.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	float peso,altura;
	printf("Informe o seu peso: ");
	scanf("%f",&peso);
	printf("Informe a sua altura: ");
	scanf("%f",&altura);
	printf("O IMC calculado foi de: %.2f", peso/pow(altura,2));
	
	return(0);
}