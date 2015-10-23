#include <stdio.h>// libreria de E/S

/*
Programa de un minisuper
*/

int resultado1;
int resultado2;
int resultado3;
int resultado4;
int resultado5;
int resultado6;
int resultado7;
int resultado8;
int resultado9;
int resultado10;
int resultado11;
int resultado12;

int producto1;
int producto2;
int producto3;
int producto4;
int producto5;
int producto6;
int producto7;
int producto8;
int producto9;
int producto10;
int dinero;

int main()

{//inicio
 
 printf("Bienvenido al mini súper\n");
 printf("Los productos que tenemos son:\n");
 printf("Papas $15\n");
 printf("Refresco $10\n");
 printf("Galletas $6\n");
 printf("Dulces $4\n");
 printf("Paletas de hielo $12\n");
 printf("Jugos $5\n");
 printf("Tortas de milanesa $16\n");
 printf("Jicaletas $8\n");
 printf("Pan dulce $3\n");
 printf("Cafe $10\n");
 printf("Dame la cantidad de productos que lleva el cliente:\n");
 
 printf("Papas:");
 scanf("%d",&producto1);
 resultado1=producto1*15;
 
 printf("Refresco:");
 scanf("%d",&producto2);
 resultado2=producto2*10;
 
 printf("Galletas:");
 scanf("%d",&producto3);
 resultado3=producto3*6;
 
 printf("Dulces:");
 scanf("%d",&producto4);
 resultado4=producto4*4;
 
 printf("Paletas de hielo:");
 scanf("%d",&producto5);
 resultado5=producto5*12;
 
 printf("Jugos:");
 scanf("%d",&producto6);
 resultado6=producto6*5;
 
 printf("Tortas de milanesa:");
 scanf("%d",&producto7);
 resultado7=producto7*16;
 
 printf("Jicaleta:");
 scanf("%d",&producto8);
 resultado8=producto8*8;
 
 printf("Pan dulce:");
 scanf("%d",&producto9);
 resultado9=producto9*3;
 
 printf("Cafe:");
 scanf("%d",&producto10);
 resultado10=producto10*10;
 
 resultado11=resultado1+resultado2+resultado3+resultado4+resultado5+resultado6+resultado7+resultado8+resultado9+resultado10;
 
 printf("El total a pagar es:$%d\n",resultado11);
 
 printf("Resibi:$");
 scanf("%d",&dinero);
 resultado12=dinero-resultado11;
 
 printf("El cambio es de:$%d");
}//fin
