#include<stdio.h>


void main()

{
	
	float promedio,suma;
	char S;
	int i,calificaciones[10];
    
    do{
	
	printf("\nBienvenido a la calculadora virtual que te da promedio de 10 alumnos\n");
	printf("\nIntrodusca las calificaciones de 10 alunos:\n");
    
    suma = 0;
	for (i=0;i<10;i++)
    {
    scanf("%d",&calificaciones[i]);
        if(calificaciones[i]>10)
       {
         printf("No se puede calcular el promedio devido\nA un error en el el digito que ingreso\n");
         printf("Por favor verifique e intenete de nuevo\n");
       }
       
        suma+=calificaciones[i];
	}
	printf("\nLa suma de las calificaciones es %.1f",suma);
    
    promedio = suma / 10;
    printf("\nEl promedio de las calificaciones es %.1f\n",promedio);
	 
    do{
	printf("Deseas continuar?[s/n]:\n");
   	fflush(stdin);
   	scanf("%c",&S);
   	printf("\n\n");
   	} while (S=='\n');
	}  while(S=='s');   
      
	printf("Grasias por usar la calculadora");
    
}
