#include<stdio.h>
#include<conio.h>

int x,y,z,u,d,c,m;
char S;
int main()

{//inico

    do{
	printf("Programa que te dice las unidades, decenas, centenas y millares de un numero\n\n ");
	
	do
	{
	printf("Ingrese su numero no mayor a cuatro digitos:");
	scanf("%d",&x);
    } 
	while(x < 1000 || x > 9999);
	
	u = x % 10;
	printf("Unidades:%d\n",u);
	
	y = x - u;
	y = y % 100;
	d = y / 10;
	printf("Decenas:%d\n",d);
	
	y = x - d*10 - u;
	z = y % 1000;
	c = (z / 10) / 10;
	printf("Centenas:%d\n",c);
	
	y = x - d*10 - c*10 - u;
	m = y / 1000;
    printf("Millares:%d\n",m);
    
    do{
	printf("Deseas continuar?[s/n]:\n");
   	fflush(stdin);
   	scanf("%c",&S);
   	printf("\n\n");
   	} while (S=='\n');
	}  while(S=='s');    
    
	printf("Grasias por usar el programa");
}//fin
