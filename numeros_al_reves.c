#include <stdio.h>
#define MAX 10

int numeros[MAX],contador=0,auxiliar[MAX],posicion=0;
int main ()
{
	printf("Programa que te imprime los numeros\nAl reves de como se los das\n\n");
	printf("Ingresa tus numeros\n\n");
	
	for(contador=0;contador<MAX;contador++) 
	{
     printf("Numero: %d : ",contador+1);
     scanf("%d",&numeros[contador]);
    }
    
    printf("\nLos elementos del vector introducidos son: ");
    for(contador=0;contador<MAX;contador++) 
	{
        printf(" %d",numeros[contador]);
    }
    
    printf("\n\nLos elementos del vector introducidos\nOrdenados al reves son: ");
    for(contador=9;contador>-1;contador--)
	{
	
        printf(" %d",numeros[contador]);
    }	
}
