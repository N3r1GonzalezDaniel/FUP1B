#include<stdio.h>

int metros,avanza,retrocede,p,dias;
char S;
int main ()

{
	do{
	printf("Programa que te dice cuantos dias tarda un cangrejo en salir de un agujero\n\n");
	printf("Proporciona los metros de profundidad en los que esta el cangrejo:");
 	scanf("%d",&metros);
 	printf ("Proporciona los metros que avanza:");
 	scanf("%d",&avanza);
 	printf("Proporciona los metros que retrocede:");
    scanf("%d",&retrocede);
    
	while(avanza == retrocede)
    {
    printf("Has ingresado numeros igulaes\nRectifica e intenta de nuevo\n\n");
    printf("Proporciona los metros de profundidad en los que esta el cangrejo:");
 	scanf("%d",&metros);
 	printf ("Proporciona los metros que avanza:");
 	scanf("%d",&avanza);
 	printf("Proporciona los metros que retrocede:");
    scanf("%d",&retrocede);
    }
    
	p = avanza - retrocede;	
    dias = (metros / p) - 1;
    
	if(dias <= 0)
    {
     printf("El cangrejo no podra subir\n");
     printf("Checa tus datos e intentalo de nuevo\n\n");
	}
    else
    if(dias >= 1)
    {
     printf("Tardo en salir son:%d dias\n\n",dias);
	}
	
	do{
	printf("Deseas continuar?[s/n]:\n");
   	fflush(stdin);
   	scanf("%c",&S);
   	printf("\n\n");
   	} while (S=='\n');
	}  while(S=='s');    
    
	printf("Grasias por usar el programa");
     
}
