/// Autor Luis
#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
	if(n==0) return 1;
	return n * factorial(n-1);
}

int factorial2(int n) {
	if(n==0 || n == 1) return 1;
	return n * factorial2(n-1);
}

int main() {
	printf("Hola Mundo\n");
	int num = 5;
	int resultado1 = factorial(num);
    printf("El factorial de %d es: %d\n", num, resultado1);
}



