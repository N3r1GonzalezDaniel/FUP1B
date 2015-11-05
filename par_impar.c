#include<stdio.h>

int N1,res;
char S;
int main()

{//inico

    do{
	printf("Programa que te dice si el numero es par o impar\n\n ");
	printf("Ingrese su numero:");
	scanf("%d",&N1);
	
	res=N1 % 2;
	
	if(res==0)
	{
		printf("Felicidades es un numero par\n\n");
	}
	else
	{
		printf("Felicidades es un numero impar\n\n");
    }
    
    do{
	printf("Deseas continuar?[s/n]:\n");
   	fflush(stdin);
   	scanf("%c",&S);
   	printf("\n\n");
   	} while (S=='\n');
	}  while(S=='s');    
    
	printf("Grasias por usar el programa");
}//fin
