#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int response;
	int cont = 0;
	printf("\r\nDigite quantos '*' voce deseja imprimir: ");
	scanf("%d", &response);
	do{
		printf("*");
		cont++;
	}while(response>cont);
}
