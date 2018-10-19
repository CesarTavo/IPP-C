#include<stdio.h>

int adicion(int x, int y){
			return (x + y);
			}
int sustraccion(int x, int y){
			return (x - y);
			}
int division(int x, int y){
			return (x / y);
			}
int producto(int x, int y){
			return (x * y);
			}
 
 
int main(){
	int c, a, b;
	
	printf("Ingresa un numero: ");
	scanf("%d", &a);
	printf("Ingresa otro numero: ");
	scanf("%d", &b);

	c = adicion(a, b);
	printf("La suma es: %d\n", c);
	c = sustraccion(a, b);
	printf("La resta es: %d\n", c);
	c = division(a, b);
	printf("La division es: %d\n", c);
	c = producto(a, b);
	printf("La multiplicacion es: %d\n", c);
	}

