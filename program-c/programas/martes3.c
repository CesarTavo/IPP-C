#include<stdio.h>

int main(){   // inicio del cuerpo de main

//declaracion de variables
int numero, contador=1;


printf("\n\tIngrese un numero: ");
scanf("%d",&numero);
printf("\n\tEsta secuencia va a ser con un for\n");


	for(contador; contador <= numero; contador ++){
 		printf("%d\n",contador);
        }

contador = 1;
printf("\n\tIngrese un numero: ");
scanf("%d",&numero);
printf("\n\tEsta secuencia es con un while\n");

	while(contador <= numero){
		printf("%d\n",contador);
		contador ++;
        }

contador = 1;
printf("\n\tIngrese un numero: ");
scanf("%d",&numero);
printf("\n\tEsta secuencia es con un do-while\n");


	do{
 		printf("%d\n",contador);
		contador ++;
        }while(contador <= numero );

}
