#include <stdio.h>

int main()
{
	int r,c,re,co,i,j,k;
	printf("Pograma que multiplica matrices\n\n");
	printf("intoduce el numero de rengolones de la matriz a:");
	scanf("%d",&r);
	printf("intoduce el numero de columnas de la matriz a:");
	scanf("%d",&c);
	printf("intoduce el numero de rengolones de la matriz b:");
	scanf("%d",&re);
	printf("intoduce el numero de columnas de la matriz b:");
	scanf("%d",&co);
	int a[r][c], b[re][co],x[r][co];
	if(re>=c)
	{

		for(i=1;i<=r;i++)
		{
			for(j=1;j<=c;j++)
			{
				printf("\nElemento para la matriz a=");
				scanf("%d",&a[i][j]);
			}
		}
	 printf("\n");
	    for(i=1;i<=re;i++)
	    {
		  for(j=1;j<=co;j++)
		    {
			 printf("\nElementos para la matriz b=");
			 scanf("%d",&b[i][j]);
		    }
	    }
	
	    for(i=1;i<=r;i++)
	    {
		    for(j=1;j<=co;j++)
		    {
			 x[i][j]=0;
			    for(k=1;k<=c;k++)
			    {
				 x[i][j]=(x[i][j]+(a[i][k]*b[k][j]));
			    }
		    }
	    }
	    
	 printf("\n\nLa matriz a es:\n");
	    for(i=1;i<=r;i++)
		{
			for(j=1;j<=c;j++)
			{
			 printf("\t%d",a[i][j]);
			}
		 printf("\n");
		}
		
	 printf("\n\nLa matriz b es:\n");
	    for(i=1;i<=re;i++)
	    {
		  for(j=1;j<=co;j++)
		    {
			 printf("\t%d",b[i][j]);
		    }
		 printf("\n");
	    }

	 printf("\n\nEl producto de la multiplicacion de matrices es:\n");
        for(i=1;i<=r;i++)
        {
    	 printf("\n");
    	    for(j=1;j<=co;j++)
    	    {
    		 printf("\t%d",x[i][j]);
		    }
	    }
	 printf("\n");
	 return 0;
    }
    printf("\nEsta mal una matriz intentalo de nuevo");
}
