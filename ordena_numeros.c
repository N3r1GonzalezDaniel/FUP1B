/*
programa que pide 1 numero real y sume dichos numeros 
*/

#include<stdio.h>// libreria de E/S
#include<conio.h>
#include<stdlib.h>
#include<string.h>

/*
la pantalla en modo consola acepta lineas de 80 caracteres
*/
#define ANCHO_PANTALLA 80

	
int A;
	
int B;
	
int C;
	
int main()

{//inicio

	printf("%*s\n", ANCHO_PANTALLA/2 + strlen("Bienvenido al rograma que te ordena numeros\n")/2, "Bienvenido al programa que te ordena numeros\n");
	printf("Ingrese un numero:\n");	
	scanf("%d",&A); //ingresa el numero
	
	printf("Ingrese otro numero:\n");	
	scanf("%d",&B); //ingresa el numero
	
	printf("Ingrese otro numero:\n");	
	scanf("%d",&C); //ingresa el numero
	
	if(A>B && A>C)
	{
		printf("El numero mayor es:%d\n",A);
		if(B<A && B>C)
		{
			printf("El numero medio es:%d\n",B);
			printf("El numero menor es:%d\n",C);
		}
		else
		{
		if(C<A && C>B)
		{
		   printf("El numero medio es:%d\n",C);
		   printf("El numero menor es:%d\n",B);
	    }
	    }
    }
	else
	{
	    if(B>A && B>C)
	{
	    printf("El numero mayor es:%d\n",B);
	    if(A<B && A>C)
	    {
	    	printf("El numero medio es:%d\n",A);
	    	printf("El numero menor es:%d\n",C);
	    }
		else
		{
		if(C<B && C>A)
		{
		printf("El numero medio es:%d\n",C);
	    printf("El numero menor es:%d\n",A);
	    }
	    }
	}
	else
	{
		if(C>B && C>A)
	{
	    printf("El numero mayor es:%d\n",C);
	    if(A<C && A>B)
	    {
	    	printf("El numero medio es:%d\n",A);
	    	printf("El numero menor es:%d\n",B);
		}
		else
		{
			if(B<C && B>A)
		{
		printf("El numero medio es:%d\n",B);
	    printf("El numero menor es:%d\n",A);
	    }
	    }
	    }
	}
}
}//fin
