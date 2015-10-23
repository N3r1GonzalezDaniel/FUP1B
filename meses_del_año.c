#include <stdio.h>// libreria de E/S

/*
Programa que te dice los meses del año
*/

int mes;

int main () 


{// Inicio
 
 printf("Hola este es el programa que te dice los meses del ano\n\n");
 printf("Dame el numero del mes que quieras saber:");
 scanf("%d",&mes);
 switch(mes)
 {
   case 1:{ 
   printf("enero");
   	break;
   }
   
   case 2:{
   	printf("febrero");
   	break;
   }
   
   case 3:{
   	printf("marzo");
   	break;
   }
   
   case 4: { 
   printf("abril");
   	break;
   }
   
   case 5:{
   	printf("mayo");
   	break;
   }
   
   case 6:{
   	printf("junio");
   	break;
   }
   
   case 7:{
   	printf("julio");
   	break;
   }
   
   case 8:{
   	printf("agosto");
   	break;
   }
   
   case 9:{
   	printf("septiembre");
   	break;
   }
   
   case 10:{
   	printf("octubre");
   	break;
   }
   
   case 11:{
   	printf("noviembre");
   	break;
   }
   
   case 12:{
   	printf("diciembre");
   	break;
   }
   
   default:{
   	printf("no es un mes");
   	break;
   }
}

}//FIN 
