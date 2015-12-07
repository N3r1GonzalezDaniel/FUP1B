#include<stdio.h>

int j;
int suma(int a, int b)

{
	int res;
	res=a+b; printf("fincion suma j=%d\n",j);
	return res;
}

int main()

{
	int res;
	j=10;
	res = suma (2,5);
	printf("%d",res);
}
