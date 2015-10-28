/*
programa que pide 2 numeros y los multilica  
*/
#include<stdio.h>
#include<conio.h>

int main()

{//inicio

	int a;
	int i; 
	int num1,num2;
	i=1;
	a=0;
	
	printf("Ingrese dos numero mayor a cero\n\n");	
	printf("Para multiplicarlos entre si\n\n");
	
	printf("Dame un numero:");
	scanf("%d",&num1);
	printf("Dame otro numero:");
	scanf("%d",&num2);
		
while(i<=num1)

{ 
     a=a+num2;
     i=i+1;
}
    printf("El resultado es:%d\n\n",a);
	
	printf("Grasias por usar este programa\n\n");
	printf("********************************************************************************\n\n");
	printf("Creado por Daniel Neri\n\n");
	printf("*********************************************************************************\n\n");
	
	system("pause");
	
}//fin
