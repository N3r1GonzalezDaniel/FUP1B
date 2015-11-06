#include<stdio.h>

int num,res,i;
char S;
int main()

{
	
	do{
	printf("Programa que te separa un numero en sus unidades\n\n ");
	printf("Ingrese su numero:");
	scanf("%d",&num);
	
	 while(num != 0)
	{
		 for(i=0;i<=num;i++)
	     {
		res = num % 10;
		num/=10;
    	printf("Digito:%d\n",res);
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
