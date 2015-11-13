#include<stdio.h>

int i,promedio,suma;
int calificaciones [8];
int main()

{
	printf("programa que te da el promedio de las calificaciones");
	calificaciones [0]=8;
	calificaciones [1]=7;
	calificaciones [2]=8;
	calificaciones [3]=7;
	calificaciones [4]=10;
	calificaciones [5]=9;
	calificaciones [6]=7;
	calificaciones [7]=7;
	
	suma=0;
	for(i=0;i<8;i++)
	{
		printf("%d\n",calificaciones [i]);
		suma+=calificaciones [i];
	}
	promedio=suma/8;
	
	printf("el promedio es:%d\n",promedio);
}
