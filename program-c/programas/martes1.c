#include<stdio.h>

int main(){   // inicio del cuerpo de main

//declaracion de variables
int numero, contador=1;


printf("\n\tIngrese un numero: ");
scanf("%d",&numero);


	do{
 		printf("%d\n",contador);
		contador ++;
        }while(contador <= numero );

}
