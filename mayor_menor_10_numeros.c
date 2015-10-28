/*
programa que pide 10 numeros y te dice cual es el menor y el mayor
*/

#include<stdio.h>// libreria de E/S
#include<conio.h>
#include<stdlib.h>
#include<string.h>

/*
la pantalla en modo consola acepta lineas de 80 caracteres
*/
#define ANCHO_PANTALLA 80

int a;
int b;
int c;
int d;
int e;
int f;
int g;
int h;
int i;
int j;
	
int main()

{//inicio

	printf("%*s\n", ANCHO_PANTALLA/2 + strlen("Bienvenido al rograma que te dice el numero mas grande y el numero mas pequeno\n")/2, "Bienvenido al rograma que te dice el numero mas grande y el numero mas pequeno\n");
	printf("Acontinuacion se le pedira teclear 10 numeros, puede colocar negativos y positivos, dependiendo de lo que desea saber\n\n");
	printf("Ingrese un numero:\n");	
	scanf("%d",&a); 
	
	printf("Ingrese otro numero:\n");	
	scanf("%d",&b); 
	
	printf("Ingrese otro numero:\n");	
	scanf("%d",&c); 
	
	printf("Ingrese otro numero:\n");	
	scanf("%d",&d); 
	
	printf("Ingrese otro numero:\n");	
	scanf("%d",&e); 
	
	printf("Ingrese otro numero:\n");	
	scanf("%d",&f);
	
	printf("Ingrese otro numero:\n");	
	scanf("%d",&g); 
	
	printf("Ingrese otro numero:\n");	
	scanf("%d",&h);
	
	printf("Ingrese otro numero:\n");	
	scanf("%d",&i);
	
	printf("Ingrese otro numero:\n");	
	scanf("%d",&j);   
	 
	
	if(a>b && a>c && a>d && a>e && a>f && a>g && a>h && a>i && a>j)
	{
		printf("el mayor es:%d\n",a);
	}
	else
	{
		if(b>a && b>c && b>d && b>e && b>f && b>g && b>h && b>i && b>j)
		{
			printf("el mayor es:%d\n",b);
		}
		else
		{
			if(c>b && c>a && c>d && c>e && c>f && c>g && c>h && c>i && c>j)
			{
				printf("el mayor es:%d\n",c);
			}
			else
			{
				if(d>b && d>c && d>a && d>e && d>f && d>g && d>h && d>i && d>j)
				{
					printf("el mayor es:%d\n",d);
				}
				else
				{
					if(e>b && e>c && e>d && e>a && e>f && e>g && e>h && e>i && e>j)
					{
						printf("el mayor es:%d\n",e);
					}
					else
					{
						if(f>b && f>c && f>d && f>e && f>a && f>g && f>h && f>i && f>j)
						{
							printf("el mayor es%d\n",f);
						}
						else
						{
							if(g>b && g>c && g>d && g>e && g>f && g>a && g>h && g>i && g>j)
							{
								printf("el mayor es:%d\n",g);
							}
							else
							{
								if(h>b && h>c && h>d && h>e && h>f && h>g && h>a && h>i && h>j)
								{
									printf("el mayor es:%d\n",h);
								}
								else
								{
									if(i>b && i>c && i>d && i>e && i>f && i>g && i>h && i>a && i>j)
									{
										printf("el mayor es:%d\n",i);
									}
									else
									{
										if(j>b && j>c && j>d && j>e && j>f && j>g && j>h && j>i && j>a)
										{
											printf("el mayor es:%d\n",j);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	if(a<b && a<c && a<d && a<e && a<f && a<g && a<h && a<i && a<j)
	{
		printf("el menor es:%d",a);
	}
	else
	{
		if(b<a && b<c && b<d && b<e && b<f && b<g && b<h && b<i && b<j)
		{
			printf("el menor es:%d",b);
		}
		else
		{
			if(c<b && c<a && c<d && c<e && c<f && c<g && c<h && c<i && c<j)
			{
				printf("el menor es:%d",c);
			}
			else
			{
				if(d<b && d<c && d<a && d<e && d<f && d<g && d<h && d<i && d<j)
				{
					printf("el menor es:%d",d);
				}
				else
				{
					if(e<b && e<c && e<d && e<a && e<f && e<g && e<h && e<i && e<j)
					{
						printf("el menor es:%d",e);
					}
					else
					{
						if(f<b && f<c && f<d && f<e && f<a && f<g && f<h && f<i && f<j)
						{
							printf("el mayor es:%d\n",f);
						}
						else
						{
							if(g<b && g<c && g<d && g<e && g<f && g<a && g<h && g<i && g<j)
							{
								printf("el mayor es:%d\n",g);
							}
							else
							{
								if(h<b && h<c && h<d && h<e && h<f && h<g && h<a && h<i && h<j)
								{
									printf("el mayor es:%d\n",h);
								}
								else
								{
									if(i<b && i<c && i<d && i<e && i<f && i<g && i<h && i<a && i<j)
									{
										printf("el mayor es:%d\n",i);
									}
									else
									{
										if(j<b && j<c && j<d && j<e && j<f && j<g && j<h && j<i && j<a)
										{
											printf("el mayor es:%d\n",j);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}//fin
