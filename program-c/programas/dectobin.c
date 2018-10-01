#include<stdio.h>

/*Programa que hace la conversión de un número entero base decimal
a un número binario, octal y hexadecimal, dependiendo de lo que el usuario pida*/

int main (){
	printf("\t++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("\t+ Toy chikito                                        +");
	printf("\n\t+ Solo puedo hacer conversiones de Decimal a Binario +");
	printf("\n\t+ De Decimal a Octal                                 +");
	printf("\n\t+ Y de Decimal a Hexadecimal                         +");
	printf("\n\t++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

	int decision;

	printf("*********************************************************************\n");
	printf("* Selecciona una de las siguientes opciones para que pueda chambear *\n");
	printf("* 1) Decimal a Binario                                              *\n");
	printf("* 2) Decimal a Octal                                                *\n");
	printf("* 3) Decimal a Hexadecimal                                          *\n");
	printf("* Cualquier otro caracter = Salir                                   *\n");
	printf("*********************************************************************\n\n");
	
	printf("¿Que deseas hacer?: ");
	scanf("%d", &decision);

	if(decision != 1 && decision != 2 && decision != 3 ){
	printf("Lamento no poder ayudarte :( \n");
	return 0;
	}

	//Se declaran las variables, 3 variables de tipo entero
	int decimal, residuo, conversion, auxiliar; 
	
	conversion = 0;
	auxiliar = 1;

	printf("Ingresa el número entero: ");
	scanf("%d", &decimal);
	

	printf("El número %d de base decimal ", decimal);
	
	switch(decision){
		case 1:
			while(decimal != 0){
				residuo = decimal % 2;
				decimal = decimal / 2;
				conversion = conversion + (residuo * auxiliar);
				auxiliar = auxiliar * 10;
			}
			printf("en Binario es %d\n", conversion);
			return 0;
			break;
		
		case 2: 	
			while(decimal != 0){
				residuo = decimal % 8;
				decimal = decimal / 8;
				conversion = conversion + (residuo * auxiliar);
				auxiliar = auxiliar * 10;
			}
			printf("en Octal es %d\n", conversion);
			return 0;
			break;

		case 3: 	
			printf("en Hexadecimal es %x\n", decimal);
			break;

		default:
			printf("No sé que hacer :( ");

	}	 
}
