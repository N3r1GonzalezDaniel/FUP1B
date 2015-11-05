#include<stdio.h>

/*
1
22
333
4444
.......
*/

int N1,numero,i;
char S;
int main()

{
	do{
	printf("programa que te hace una piramide de numeros\n\n");
	printf("dame un numero:");
	scanf("%d",&N1);
	
	   	 while(N1<=0)
     { 
	 printf("Ingrese un numero mayor a cero!, por favor\n");
	 printf("Intenta de Nuevo Tienes Otra Oportunidad!\n");
  	 scanf("%d",&N1);
     }
	numero=1;
	while (numero<= N1)
	{
		i=1;
		while(i<=numero)
		{
	printf("%d",numero);
	i++;
    }
	printf("\n");
	numero++;
	}
	
	do{
	printf("Deseas continuar?[s/n]:\n");
   	fflush(stdin);
   	scanf("%c",&S);
   	printf("\n\n");
   	} while (S=='\n');
	}  while(S=='s');    
    
	printf("Grasias por usar el programa");
}
