#include <stdio.h>
#include <locale.h>
/*Implemente um programa que solicita ao usuário a
entrada de um número inteiro e apresenta seu antecessor e sucessor.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int x;
	printf("informe um número inteiro: ");
	scanf("%i", &x);
	
	printf("o sucessor de %x é %x \n", x,x + 1);
	printf("o antecessor de %x é %x", x,x - 1);
	
	return(0);
}