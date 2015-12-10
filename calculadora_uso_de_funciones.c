#include<stdio.h>
int suma(int a,int b);
int resta(int a,int b);
int multiplica(int a,int b);
int divide(int a,int b);
int n1,n2,res;
int main()
{
	printf("\tCalculadora virtual");
	printf("\n\nDame un numero:");
	scanf("%d",&n1);
	printf("\n\n Dame otro numero:");
	scanf("%d",&n2);
	printf("\nLa suma es: %d",suma(n1,n2));
	printf("\nLa resta es: %d",resta(n1,n2));
	printf("\nLa multiplicacion es: %d",multiplica(n1,n2));
	printf("\nLa divicion es: %d",divide(n1,n2));
}

int suma(int a,int b)
{
    a=n1; b=n2;
	return a+b;
} 

int resta(int a,int b)
{
    a=n1; b=n2;
	return a-b;
}
 
int multiplica(int a,int b)
{
    a=n1; b=n2;
	return a*b;
}

int divide(int a,int b)
{
	int n1,n2,res;
    if(b!=0)
	{
	 return a/b;
    }
      else 
    {
	  printf("\nERROR: El divisor es cero");
	  printf("\nPor esa razon el resultado es infinito");
      printf("\nPor eso se muestra 0 como resultado");
	}
    return 0;
}
