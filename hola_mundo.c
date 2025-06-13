/// Autor Luis
#include <stdio.h>

int main() {
	printf("Hola Mundo\n");
	int *a = NULL;
	*a = 100;
}

int factorial(int n) {
	if(n==0) return 1;
	return n * factorial(n-1);
}

int factorial2(int n) {
	if(n==0 || n == 1) return 1;
	return n * factorial2(n-1);
}

