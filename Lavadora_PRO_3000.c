#include <stdio.h>// libreria de E/S

/*
Programa de la Lavadora Pro 3000
*/

int kilos;

int tipo;

int main ()

{//inicio
  printf("Bienvenido a la Lavadora Pro 3000 Ultra\n\n");
  printf("Para brindarte un buen servicio de lavado\n\n");
  printf("Introdusca la cantidad de peso a lavar:");
  scanf("%d",&kilos);
  if(kilos>=0&&kilos<=20){
  
  if(kilos>=0 && kilos<=10)
  {
  	printf("El nivel de agua es MINIMO\n\n");
  } 
  else
  
  if(kilos>=10 && kilos<=15)
  {
  	printf("El nivel de agua es MEDIO\n\n");
  }
  else
  
  if(kilos>=16 && kilos<=20)
  {
  	printf("El nivel de agua es MAXIMO\n\n");
  }
  
	printf("Para lograr lavar correctamente introduzca el tipo de ropa\n");
	printf("Dependiendo del estado en el que se encuentre\n");
	printf("Delicada presiona 1\n");
	printf("Normal presiona 2\n");
	printf("Sucia presiona 3\n");
	scanf("%d",&tipo);
    switch(tipo)
{
    case 1:{
    	printf("El tipo de ropa es delicada, el tiempo de lavado es de 5 minutos\n");
		break;
	}
	
	case 2:{
		printf("El tipo de ropa es normal, el tiempo de lavado es de 10 minutos\n");
		break;
	}
	
	case 3:{
		printf("El tipo de ropa es sucia; el tiempo de lavado es de 20 minutos\n");
		break;
	}
	
	default:{
   	printf("Ese no es un tipo de ropa, repitalo denuevo\n\n");
   	break;
   }
}
   printf("Grasias por usar la Lavadora Pro 3000 Ultra\n");
   printf("En un momento le avisaremos que su ropa esta lista\n");
}
else{
	printf("No se puede lavar, favor de quitar peso");
}
}//fin
