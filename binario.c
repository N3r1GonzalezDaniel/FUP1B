#include<stdio.h>
/* 
algunos numeros con los que lo puede probar son:
145,571,1053,3056,5030,etc.
*/

int num=0,n[16],i=0,j=0;
int main()

{
	printf("Programa que te convierte cualquier numero a binario\n\n");
	printf("Introdusca el numero a convertir:");
    scanf("%d",&num); 
	printf("\nEl numero binario de %d es:",num);
	
	while(num >= 2)
	{
	 n[i]= num % 2;
	 num/=2;
     i++;		
	}
	n[i]=num;
	for(j=i;j>=0;j--)
	{
		printf(" %d",n[j]);
	}
	
}
