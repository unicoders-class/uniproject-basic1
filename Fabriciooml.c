#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "portuguese");
	
	int res;
	int counter = 0;
	
	printf("\n\rAté quando você quer contar?\n");
	scanf("%d", &res);
	
	do{
		printf("*");
		counter += 1;
	}while(counter<res);
}
