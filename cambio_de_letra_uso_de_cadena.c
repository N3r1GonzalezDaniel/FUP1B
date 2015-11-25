#include<stdio.h>

char cadena[50],buscar,remplazar;
int i;
int main()

{
	printf("Programa que te cambia la letra que quieras por otra\n\n");
	printf("Escribe tu palabra: ");
	scanf("%s",cadena);
	printf("\nEscribe la letra que quieres cambiar: ");
	scanf(" %c",&buscar);
	printf("\nEscribe la letra que quieres poner: ");
	scanf(" %c",&remplazar);
	
    for(i=0;i<50;i++)
	{ 
	  if(cadena[i]==buscar)
	    { 
	     cadena[i] = remplazar;
	    }
	}

    printf("\nTu palabra cambiada queda asi: ");
	printf("%s",cadena);
}
