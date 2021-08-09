#define sumar(a,b) a+b
#define multiplicar(a,b) a*b
#define dividir(a,b) a/b

#include <iostream>

int numero1 = 2;
int numero2 = 4;

int suma;
int mult;
int div;

using namespace std;

int main ()

{
	
	suma = sumar(numero1, numero2);
	mult = multiplicar(numero1, numero2);
	div = dividir(numero2, numero1);
	
	cout<< "la suma es: " << suma << endl;
	cout<< "multiplicacion es : "<< mult<< endl;
	cout<<"el cociente es: "<<div<< endl;
	
	cin.get();
	return 0;
	
}
