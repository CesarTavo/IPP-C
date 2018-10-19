#include <stdio.h>

   int numero;

int factorial(numero) {

   if(numero <= 1) {
      return 1;
   }
   return numero * factorial(numero - 1);
}

int  main() {
   printf("Ingrese un numero: ");
   scanf("%d", &numero);
   printf("Factorial de %d es %d\n", numero, factorial(numero));
   return 0;
}
