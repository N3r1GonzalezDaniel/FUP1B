#include<stdio.h>

int final,i;
char S;
int main()

{
	
	printf("Programa que imprime numeros naturales\n en forma de lista\n\n");
	
	do{
	printf("Dame un numero no mayor a 10:");
	scanf("%d",&final);

	while(final<=0)
{ 
	printf("Ingrese un numero mayor a cero!, por favor\n");
	printf("Intenta de Nuevo Tienes Otra Oportunidad!\n");
	scanf("%d",&final);
	
		for(i=1;i<=final;i++)
	{
		printf("Su numero es:%d\n",i);
	}
}

	
	while (final>10)
{ 
	printf("Ingrese un numero mayor a 10!, por favor\n");
	printf("Intenta de Nuevo Tienes Otra Oportunidad!\n");
	scanf("%d",&final);
	
	for(i=1;i<=final;i++)
	{
		printf("Su numero es:%d\n",i);
	}
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
