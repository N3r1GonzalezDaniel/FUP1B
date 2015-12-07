#include<stdio.h>

int j;
void funcion()

{
	printf("j=%d\n",j);
}

main ()

{
	funcion();
	j=10;
	funcion();
}

