#include <iostream>
using namespace std;

//clase es un objeto, que se comforma de tal manera, c++ es orientado a objetos

class cuentas
{
	public:		//datos publicos, porque se pueden cambiar o se pueden llamar funciones
		int sumaDos(int arg); 
		int sumaTres(int arg);
	private:	 //ocjetos propios de la clase, no se puede cambiar
		 int resultado;
	//protected: // objetos protejidos
};

int cuentas::sumaDos(int arg)
{
	resultado = arg+2;
	return resultado;	
}

int cuentas::sumaTres(int arg)
{
	resultado = arg+3;
	return resultado;
}
int main ()

{
	
	cuentas cuenta;
	
	cout<<"+2 = "<<cuenta.sumaDos(2)<<endl;
	cout<< "+3 = "<<cuenta.sumaTres(2)<<endl;
	cin.get();
	return 0;
	
}
