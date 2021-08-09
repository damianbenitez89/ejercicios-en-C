// PUNTEROS: variables que guardan la direccion en memoria de otra variable

#include <iostream>

using namespace std;

int numero = 12;
int *puntero= &numero;

int main()
{
	cout<< puntero<<endl; //da la direccionde memoria
	cout<< *puntero<<endl;//da el valor de la direccion
	cin.get();
	return 0;
	
}
