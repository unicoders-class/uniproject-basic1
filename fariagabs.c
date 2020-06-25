#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[])

 {
	int response;
	
	printf("Escreva a quantidade: ");
	scanf("%d", &response);
	
	int contador=0;
	do
	{
	printf("*");
	contador++;
	}
	while(contador<response);
	
}
