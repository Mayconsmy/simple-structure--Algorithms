#include <stdio.h>
#include <locale.h>
#include <math.h>
/*Escreva um programa que solicita e lê um número, calcula e exibe o seu cubo.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	float x;
	printf("informe um número: ");
	scanf("%f", &x);
	
	printf("o cudo de %.0f é %.0f", x, pow(x,3));
	
	return(0);
}