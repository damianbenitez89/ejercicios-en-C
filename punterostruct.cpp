#include <iostream>

using namespace std;

struct miestructura {
	
	int a;
}miEstrucutura, *puntero;

int main ()
{
	
	miEstrucutura.a = 12;
	puntero = &miEstrucutura;
	
	cout << puntero  << endl; //posicion en la memoria de la estructura
	cout <<puntero ->a << endl; // el valor de la estructura
	
	
	cin.get();
	return 0;
	
	
	
}

