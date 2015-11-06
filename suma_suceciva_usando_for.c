	/*
programa que pide 2 numeros y los multilica  
*/
#include<stdio.h>

	int i,num1,num2,suma;
	char S;
int main()
	
{
    do{
	printf("Ingrese dos numero\n\n");	
	printf("Para multiplicarlos entre si\n\n");
	printf("Dame un numero:");
	scanf("%d",&num1);
	printf("Dame otro numero:");
	scanf("%d",&num2);
	
	suma=0;
	for(i=1;i<=num2;i++)
    {
    	suma=suma+num1;
    	suma=suma;
	}
	printf("El resultado es:%d\n\n",suma);
	
		do{
	printf("Deseas continuar?[s/n]:\n");
   	fflush(stdin);
   	scanf("%c",&S);
   	printf("\n\n");
   	} while (S=='\n');
	}  while(S=='s');    
    
	printf("Grasias por usar el programa");
}
