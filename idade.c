#include <stdio.h>
#include <locale.h>
/*Implemente um programa que solicita ao usuário a sua idade e calcula quantos dias
de vida, aproximadamente, ele já viveu.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int idade;
	printf("informe a sua idade: ");
	scanf("%d", &idade);
	
	printf("você tem %d anos, isso corresponde a aproximadamente %d dias vividos.",idade,idade * 365);
	
	return(0);
}