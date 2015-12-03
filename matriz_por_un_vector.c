//multiplicacion de una matriz y un vector
#include <stdio.h>

int main()
{
	int r,c,re,co,i,j,k;
	printf("Pograma que te multiplica una matriz de 3 por 3\n");
	printf("Y un vector de 3 por 1\n\n");
	printf("Intoduce los numeros de la matriz 3 por 3\n");
	int a[3][3], b[3][1],x[3][1];
	
	for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
		{
		 printf("\nNumero=");
		 scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nIntoduce los numeros del vector 3 por 1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("\nVector=");
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<1;j++)
		{
			x[i][j]=0;
			for(k=0;k<3;k++)
			{
				x[i][j]=(x[i][j]+(a[i][k]*b[k][j]));
			}
		}
	}

	printf("\n\nEl producto de la multiplicacion del vector y la matriz es:\n");
    for(i=0;i<3;i++)
    {
    	printf("\n");
    	for(j=0;j<1;j++)
    	{
    		printf("\t%d",x[i][j]);
		}
	}
	printf("\n");
}
