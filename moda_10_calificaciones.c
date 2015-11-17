#include <stdio.h>
#define MAX 10
int main(int argc, char *argv[])
{
    int numeros[MAX],contador=0,auxiliar[MAX],posicion=0,numero=0,contador2=0,mayor=0,posicionmayor=0,bandera=0;
    float promedio,suma=0;
    
	printf("\nBienvenido a la calculadora virtual que te da promedio de %d alumnos\n",MAX);
	printf("\nIntrodusca las calificaciones de %d alunos:\n",MAX);

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
          
		printf("\nLA MODA: %d",numeros[posicionmayor]);
		
		printf("\nGrasias por usar la calculadora"); 

}
