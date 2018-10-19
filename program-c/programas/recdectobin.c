#include <stdio.h>

int decimal;

int dectobin() 
{ 
   int residuo; 
   if(decimal == 0) 
      return; 

   residuo = decimal % 2; 
   decimal = decimal / 2; 
   dectobin(); 
   
   printf("%d", residuo); 
 
}
int dectooct() 
{ 
   int residuo; 
   if(decimal == 0) 
      return; 

   residuo = decimal % 2; 
   decimal = decimal / 2; 
   dectooct(); 
   
   printf("%d", residuo); 
 
}




int main() 
{ 
   printf("Introduce un numero: ");
   scanf("%d", &decimal);
   printf("\n el numero %d en binario es ", decimal);
   dectobin();
   printf("\n");
   dectooct();
   printf("\n");
 } 
