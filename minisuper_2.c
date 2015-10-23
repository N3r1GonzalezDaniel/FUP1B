#include <stdio.h>// libreria de E/S

/*
Programa  de minisuper 
*/

int resultado;

int producto;

int dinero;

int main () 


{// Inicio
 
 printf("Hola bienvenido al mini super\n\n");
  printf("Los productos que tenemos son:\n");
 printf("1)Papas $15\n");
 printf("2)Refresco $10\n");
 printf("3)Galletas $6\n");
 printf("4)Dulces $4\n");
 printf("5)Paletas de hielo $12\n");
 printf("6)Jugos $5\n");
 printf("7)Tortas de milanesa $16\n");
 printf("8)Jicaletas $8\n");
 printf("9)Pan dulce $3\n");
 printf("10)Cafe $10\n");
 printf("Dime que producto quieres:\n");
 scanf("%d",&producto);
 switch(producto)
{
   case 1:{
   	 printf("Papas ¿cuantas quieres?");
 scanf("%d",&producto);
 resultado=producto*15;
 printf("el total es:%d",resultado);
	break;
   }
   
   case 2:{
   	printf("Refresco ¿cuantos quieres?");
 scanf("%d",&producto);
 resultado=producto*10;
 printf("el total es:%d",resultado);
	break;
   }
   
   case 3:{
   	printf("Galletas ¿cuantas quieres?");
 scanf("%d",&producto);
 resultado=producto*6;
 printf("el total es:%d",resultado);
	break;
   }
   
   case 4:{
   	printf("Dulces ¿cuantas quieres?:");
 scanf("%d",&producto);
 resultado=producto*4;
 printf("el total es:%d",resultado);
	break;
   }
   
   case 5:{
   	printf("Paletas de hielo ¿cuantas quieres?:");
 scanf("%d",&producto);
 resultado=producto*12;
 printf("el total es:%d",resultado);
	break;
   }
   
   case 6:{
   	printf("Jugos ¿cuantos quieres?:");
 scanf("%d",&producto);
 resultado=producto*5;
 printf("el total es:%d",resultado);
	break;
   }
   
   case 7:{
   	printf("Tortas de milanesa ¿cuantas quieres?:");
 scanf("%d",&producto);
 resultado=producto*16;
 printf("el total es:%d",resultado);
	break;
   }
   
   case 8:{
   	printf("Jicaleta ¿cuantas quieres?:");
 scanf("%d",&producto);
 resultado=producto*8;
 printf("el total es:%d",resultado);
	break;
   }
   
   case 9:{
   	printf("Pan dulce ¿cuantos quieres?:");
 scanf("%d",&producto);
 resultado=producto*3;
 printf("el total es:%d",resultado);
	break;
   }
   
   case 10:{
   	printf("Cafe ¿cuantos quieres?:");
 scanf("%d",&producto);
 resultado=producto*10;
 printf("el total es:%d",resultado);
	break;
   }
   
   default:{
   	printf("no es un producto");
   	break;
   }
}

}//FIN


