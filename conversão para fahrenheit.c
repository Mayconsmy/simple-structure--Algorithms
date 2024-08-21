#include <stdio.h>
#include <locale.h>
/*Crie um programa que solicita e lê uma temperatura em Celsius, faz a conversão
para Fahrenheit e exibe tal resultado.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	float c;
	printf("informe a temperatura em celsius: ");
	scanf("%f", &c);
	
	printf("A temperatura em Fahrenheit é de: %.2f", (c * 1.8) + 32);
	
	return(0);
}