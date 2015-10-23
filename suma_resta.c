#include<stdio.h>//libreria de E/S

/*
Programa que suma dos numeros
*/

int resultado;
int resultado1;

int N1;
int N2;

int main()

{//inicio
 printf("Dame un numero:");
 scanf("%d",&N1);
 printf("Dame otro numero:");
 scanf("%d",&N2);
 
 resultado=N1+N2;
 resultado1=N1-N2;
 
 printf("El resultado de la suma es:%d\n",resultado);
 printf("El resultado de la resta es:%d",resultado1);
}//fin
