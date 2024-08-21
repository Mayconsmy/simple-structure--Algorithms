#include <stdio.h>
#include <locale.h>
/*Faça um programa que solicita e lê dois números, calcula e exibe o dobro do
primeiro e o triplo do segundo.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int n1,n2;
	printf("informe um número inteiro: \n");
	scanf("%i", &n1);
 	printf("informe o segundo número inteiro: \n");	
	scanf("%i",&n2);
	
	printf("\no dobro de %i é %i ", n1, n1 * 2);
	printf("\no triplo de %i é %i", n2, n2 * 3);
	
	return(0);
}