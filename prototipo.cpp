#include <stdio.h>

int suma(int a, int b);

int main() {
	int a = 4; int b= 5;// te permite prevenir la funcion y desarrollarla a lo ultimo
	
	int resultado;
	
	resultado= suma(a,b);
	
	printf("%d+%d=%d\n",a,b,resultado);
	
	return 0;
	
}

int suma(int a, int b) {
	
	int x;
	x=a+b;
	return x;
}
