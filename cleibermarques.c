#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) 
{
	setlocale(LC_ALL, "portuguese");
	int response;
	
	printf("Escreva a quantidade: ");
	scanf("%d", &response);
	
	int contador=0;
	do
	{
		printf("*");
		contador++; // é igual a contador += 1; que tbm é igual a contador = contador + 1;
	}while(contador<response);
}
