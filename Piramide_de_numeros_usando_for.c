#include<stdio.h>

/*
1
22
333
4444
.......
*/

int final,i,j;
char S;
int main()

{
	do{
	printf("programa que te hace media piramide de numeros\n\n");
	printf("dame un numero:");
	scanf("%d",&final);
	
	for(i=1;i<=final;i++)
	{
	for(j=1;j<=i;j++)
	 {
	  printf("%d"" ",i);
     }
	  printf("\n");
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
