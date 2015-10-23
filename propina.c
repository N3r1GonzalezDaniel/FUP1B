#include<stdio.h>//libreria de E/S

/*
Programa que calcula la propina, cambio y el total a pagar
*/

float resultado;
float resultado1;
float resultado2;
float N1;
int N2;

int main()

{//inicio
 printf("Bienvenido al programa que te ayuda a aseber\n\n");
 printf("El total a pagar, la acnidad de propina que debes dar y\n\n");
 printf("Cuanto le toca a cada uno pagar por la comida o lo que hayan echo\n\n");
 
 printf("Ingrese la cuenta total a pagar:");
 scanf("%f",&N1);
 
 printf("Dame la cantidad de personas que fueron a comer:");
 scanf("%d",&N2);
 
 resultado=N1*0.10;
 resultado1=N1+resultado;
 resultado2=resultado1/N2;
 
 printf("la cantidad de propina que debes dar al mesero es:$%f\n\n",resultado);
 printf("la cantidad total a pagar mas la propina es:$%f\n\n", resultado1);
 printf("La cantidad que les toca cooperar por persona es:$%f\n\n", resultado2);
}//fin
