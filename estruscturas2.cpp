#include <iostream>

using namespace std;

int main()
{
	
	struct hogar
	{
		int numeroDireccion;
		int numerotel;
		
	}Fernandez, Gonzalez;
	Fernandez.numerotel = 12156543;
	Fernandez.numeroDireccion = 3205;
	
	Gonzalez.numerotel= Fernandez.numerotel;
	Gonzalez.numeroDireccion= Fernandez.numeroDireccion;
	
	cout<<Gonzalez.numerotel<<endl;
	
	cin.get();
	return 0;
}
