#include <stdio.h>
#include <stdlib.h>

void main()
{
   int response;

   printf("Escreva a quantidade: ");
   scanf("%d", &response);

   int contador=0;
   do
   {
       printf("*");
       contador++;
   }while(contador<response);
}
