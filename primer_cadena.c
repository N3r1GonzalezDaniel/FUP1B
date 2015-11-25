#include<stdio.h>

char cadena[20];
int main()

{
	printf("Mi primer cadena\n\n");
	cadena[0]='H';
	cadena[1]='o';
	cadena[2]='l';
	cadena[3]='a';
	cadena[4]=' ';
	cadena[5]='M';
	cadena[6]='u';
	cadena[7]='n';
	cadena[8]='d';
	cadena[9]='o';
	cadena[10]='\0';
	printf("%s",cadena);
}
