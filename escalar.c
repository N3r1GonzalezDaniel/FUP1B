//Matriz ingresada por el usuario
#include<stdio.h>

int identidad[3][3],i,j,contador,numero;
int main()
{
   	printf("Programa que te hace una matriz de\n\n3 filas y 3 columnas");
   	printf("\n\nDame el numero por el cual lo vas a multiplicar:");
   	scanf("%d",&numero);
	printf("\n\nIngrese los digitos para hacer la matriz\n\n");
   	
	for(i=0;i<3;i++) 
	{
		for(j=0;j<3;j++)
		{
          printf("Numero: ");
          scanf("%d",&identidad[i][j]);
        }
    }
   	
   	printf("\n\nTu matriz queda asi:\n\n");
   	for(i=0;i<3;i++)
   	{
   	    for(j=0;j<3;j++)
   	    {
   	     printf("%d ",identidad[i][j]);	
		}
		printf("\n");
	}
	
	printf("\n\nTu matriz multiplicada queda asi:\n\n");
   	for(i=0;i<3;i++)
   	{
   	    for(j=0;j<3;j++)
   	    {
   	     printf("%d ",identidad[i][j]*numero);	
		}
		printf("\n");
	}
}
