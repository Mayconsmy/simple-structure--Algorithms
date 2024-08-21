#include <stdio.h>
#include <locale.h>
/*Crie um programa que solicita e lê a cotação do dólar atual e o valor em real
a ser convertido e, em seguida, calcula e exibe o resultado da conversão.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	float x1,x2;
	printf("Informe a cotação do dolar atual: \n");
	scanf("%f", &x1);
	
	printf("Informe quantos reais você deseja converte: ");
    scanf("%f",&x2);
	
	printf("A conversão resultou em aproximadamente: %.2f", x2/x1 );
	return(0);
}