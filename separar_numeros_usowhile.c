#include<stdio.h>
#include<conio.h>

int x,res;
char S;
int main()

{//inico

   do{
	printf("Programa que te dice las unidades, decenas, centenas y millares de un numero\n\n ");
	printf("Ingrese su numero:");
	scanf("%d",&x);

    while(x != 0)
    {
    	res = x % 10;
    	printf("Digito:%d\n",res);
    	x = x / 10;
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
