#include<stdio.h>


int suma(int a, int b)

{
	int res;
	res=a+b;
	return res;
}

main()

{
	int res,a,b;
	a=1; b=2;
	res = suma (a,b);
	printf("%d\n",res);
	
	a=45; b=120;
	res = suma (a,b);
	printf("%d\n",res);
}

