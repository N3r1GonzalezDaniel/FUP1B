#include <stdio.h>// libreria de E/S

/*
Programa que te humilla
*/

int N1;

int main()

{// Inicio
 printf("Hola este es el programa que te humilla");
 printf("Dame la calificacion del alumno:");
 scanf("%d",&N1);
 if(N1>=7 && N1<=10)
 {
 	printf("Felicidades pasaste");
 }
 else
 {
 	printf("Felicidades reprobastes");
 }
}// Fin
