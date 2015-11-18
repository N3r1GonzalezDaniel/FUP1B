#include <stdio.h>
int espacios[10];
int indice;
int numero;
int main()
{  
	 printf("Programa que te da los 10 primeros multiplos de un numero\n\n");
	 printf("ingresa el numero: ");
	 scanf("%d",&numero);

	 for(indice=0; indice < 10; indice++)
	    {
	     espacios[indice] = numero*(indice+1);
        }
	 
	 printf("\n\nLos mulriplos de %d son: \n",numero);
	 
	 for(indice=0; indice < 10; indice++)
	    {
	      printf("%d\n",espacios[indice]);
        }
}
