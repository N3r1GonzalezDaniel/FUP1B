/*
programa que pide 1 numero real y sume dichos numeros 
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

/*
la pantalla en modo consola acepta lineas de 80 caracteres
*/
#define ANCHO_PANTALLA 80

int main()

{//inicio

	int num;
	int dato=0;
	int suma; 
	printf("%*s\n", ANCHO_PANTALLA/2 + strlen("Bienvenido al rograma que suma numeros reales\n")/2, "Bienvenido al programa que suma numeros reales\n");
	printf("Ingrese un numero mayor a cero\n");	
	printf("Para sumarlo con sus predecesores\n");
	scanf("%d",&suma); //ingresa el numero

	while(suma<=0)
{ 
	printf("Ingrese un numero mayor a cero!, por favor\n");
	printf("Intenta de Nuevo Tienes Otra Oportunidad!\n");
	scanf("%d",&suma);
}

	while(suma>10)
{ 
	printf("Ingrese un numero menor o igual a 10!, por favor\n");
	printf("Intenta de Nuevo Tienes Otra Oportunidad!\n");
	scanf("%d",&suma);
}

while(suma!=0)
{ 
	if(suma!=1) printf("MAS: %d \n",suma-1);
	dato=dato+suma;
	suma--;
}

	printf("El resultado es: %d\n",dato);
	getch();
	return 0;
	
}//fin

