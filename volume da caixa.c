#include <stdio.h>
#include <locale.h>
/*Faça um programa para calcular o volume de uma caixa retangular.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	float C,L,A;
	printf("Informe o comprimento da caixa: \n");
	scanf("%f",&C);
	printf("Informe a largura da caixa: \n");
	scanf("%f",&L);
	printf("Informe a altura da caixa: \n");
	scanf("%f",&A);
	printf("O volume da caixa corresponde a: %.2f m³", C*L*A);
	return(0);
}
