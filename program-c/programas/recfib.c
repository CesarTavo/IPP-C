#include <stdio.h>

int numero;

int fibonacci(numero) {

   if(numero == 0) {
      return 0;
   }else if(numero == 1) {
      return 1;
   }else
	return fibonacci(numero - 1) + fibonacci(numero - 2);
}

int  main() {
	
   printf("Ingresa un numero: ");
   scanf("%d", &numero);

   int contador;

   for (contador = 0; contador <= numero; contador++) {
      printf("fibonacci de %d es %d\t\n",contador, fibonacci(contador));
   }
	
   return 0;
}
