#include <stdio.h>// libreria de E/S

/*
Programa que te humilla
*/

int N1;

int main()

{// Inicio
 printf("Hola este es el programa que tedice el rango de edad en el que te encuentras\n\n");
 printf("Dame la edad que tienes:");
 scanf("%d",&N1);
 if(N1>=0 && N1<=12)
 {
 	printf("Felicidades eres un nino");
     }
 	else
 	    
 	    	if(N1>=13 && N1<=18)
 	    {
 	    	printf("Felicidades eres un adolecente");
		 }
 		   else 
	    
	    	if(N1>=19 && N1<=29)
	    	{
	    		printf("Felicidades eres un joven");
			}
	        else 
	        
		    if(N1>=30 && N1<=59)
		    {
		    	printf("Felicidades eres un adulto");
			}
          
	      else 
	     
		 	if(N1>=60)
		 	{
		 	printf("Felicidades eres un adulto mayor");
			 }
	    
	 
}// Fin
