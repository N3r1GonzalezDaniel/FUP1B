#include <stdio.h>
#define MAX 10
int main(int argc, char *argv[])
{
    int numeros[MAX],contador=0,auxiliar[MAX],posicion=0,numero=0,contador2=0,mayor=0,posicionmayor=0,bandera=0;
    float promedio,suma=0;
    
	printf("\nBienvenido a la calculadora virtual que te da promedio de 10 alumnos\n");
	printf("\nIntrodusca las calificaciones de 10 alunos:\n");

	for(contador=0;contador<MAX;contador++) 
	{
     printf("Calificacion: %d : ",contador+1);
     scanf(" %d",&numeros[contador]);
    }
	
	  for(contador=0;contador<MAX;contador++) 
	    {	
         auxiliar[contador]=0;
        }
    
        for(contador=0;contador<MAX;contador++) 
	    {
         numero = numeros[contador];
         posicion = contador;
         
		 for(contador2=contador;contador2<MAX;contador2++) 
		    {
             if(numeros[contador2]==numero) auxiliar[posicion]++;
            }
        }

        mayor=auxiliar[0];
        posicionmayor = 0;
    
	    for(contador=0;contador<MAX;contador++) 
	    {
         if(auxiliar[contador]>mayor) 
	        {
             posicionmayor=contador;
             mayor=auxiliar[contador];
            }
        }  
          
		printf("\nMODA: %d",numeros[posicionmayor]); 
		  
		for (contador=0;contador<MAX;contador++)
        {
	     suma+=numeros[contador];
	    }
		printf("\nLa suma de las calificaciones es %.1f",suma);
        promedio = suma / MAX; 
		printf("\nEl promedio de las calificaciones es %.1f\n",promedio); 	     
    
	printf("\nGrasias por usar la calculadora");   
}
