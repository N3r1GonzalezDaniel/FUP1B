#include<stdio.h>

char cadena[50],subcadena[50];
int i,j;
int main()

{
	
	printf("Programa que busca una subcadena dentro de otra cadena\n\n");
	printf("Escribe tu palabra: ");
	scanf("%s",cadena);
	printf("\nEscribe la palabra que quieres buscar: ");
	scanf("%s",subcadena);
    
    j=0;
    i=0;
    while(cadena[i] != '\0')
    {

        while(cadena[i] == subcadena[j])
        {
         i++;
         j++;
            
            if(subcadena[j]=='\0')
			{
			 printf("\nLa subcadena %s si existe",subcadena);
			 return 0;
		    }
		}
    i++;
	j=0;
	if('\0' == cadena[i])
	{
	 printf("\nLa subcadena %s no existe",subcadena);
	 break;   	
	}
    }
}
