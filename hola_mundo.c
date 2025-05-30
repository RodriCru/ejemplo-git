/// Autor Luis
#include <stdio.h>

int main() {
	printf("Hola Mundo\n");
}

int factorial(int n) {
	if(n==0) return 1;
	return n * factorial(n-1);
}
