#include <stdio.h>

int suma(int a, int b) {
	
	int x;
	x=a+b;
	return x;
}

int main() {
	int a = 4; int b= 5;
	
	int resultado;
	
	resultado= suma(a,b);
	
	printf("%d+%d=%d\n",a,b,resultado);
	
	return 0;
	
}
