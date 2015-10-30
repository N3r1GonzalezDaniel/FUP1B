#include <stdio.h>
/*PROMEDIO DE 10 NUMEOROS*/

float a,b,c,d,e,f,g,h,i,j;
char S;
int main()

{//INICIO
   
   do{
   	printf("Bienvenido a la Calculadora Virtual, que te da el promedio de 10 numeros\n\n");
   	printf("Ingrese acontinuacion los 10 numeros\n");
   	printf("NUMERO 1:");
   	scanf("%f",&a);
   	printf("NUMERO 2:");
   	scanf("%f",&b);
   	printf("NUMERO 3:");
   	scanf("%f",&c);
   	printf("NUMERO 4:");
   	scanf("%f",&d);
   	printf("NUMERO 5:");
   	scanf("%f",&e);
   	printf("NUMERO 6:");
   	scanf("%f",&f);
   	printf("NUMERO 7:");
   	scanf("%f",&g);
   	printf("NUMERO 8:");
   	scanf("%f",&h);
   	printf("NUMERO 9:");
   	scanf("%f",&i);
   	printf("NUMERO 10:");
   	scanf("%f",&j);
   	printf("El promedio de sus numeros es:%.2f\n\n",(a+b+c+d+e+f+g+h+i+j)/10);
   	printf("Deseas continuar?[s/n]:\n");
   	fflush(stdin);
   	scanf("%c",&S);
   }  while(S=='s');
   printf("Grasias por usar la calculadora");
}//FIN
