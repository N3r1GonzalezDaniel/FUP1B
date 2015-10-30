#include <stdio.h>
#include <stdlib.h>

int main()

{//inicio

int opc,a,b,q;
float x,y,r;

do{
printf("Bienvenido a la Calculadora Virtual\n\n");
printf("Dependiendo de la operacion que dese, introdusca el numero\n\n");
printf("\n1)suma\n2)resta\n3)multiplicacion\n4)divicion\n\n");
printf("introduce una opcion:\n");
scanf("%d",&opc);

switch(opc){
case 1:{
printf("introduce el primer dato\n");
scanf("%d",&a);
printf("introduce el segundo dato\n");
scanf("%d",&b);
printf("la suma es:%d\n\n",a+b);
break;
}
case 2:{
printf("introduce el primer dato\n");
scanf("%d",&a);
printf("introduce el segundo dato\n");
scanf("%d",&b);
printf("la resta es:%d\n\n",a-b);
break;
}
case 3:{
printf("introduce el primer dato\n");
scanf("%d",&a);
printf("introduce el segundo dato\n");
scanf("%d",&b);
printf("la multiplicacion es:%d\n\n",a*b);
break;
}
case 4:{
printf("introduce el primer dato\n");
scanf("%d",&x);
printf("introduce el segundo dato\n");
scanf("%d",&y);
printf("la division es:%.2f\n\n",x/y);
break;
}
default:{
printf("opcion inexistente\n");
break;
}
}
printf("desea volver a ejecutar?\nPRESIONE 1)SI\nPRESIONE 2)NO\n");
scanf("%d",&q); 
}
while(q==1);
printf("Grasias por usar la calculadora");

}//fin
