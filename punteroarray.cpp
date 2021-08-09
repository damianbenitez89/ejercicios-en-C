#include <iostream>

using namespace std;

int array [5];
int *p;


int main()
{
	p=array; // p = array[0]
	
	
	
	cout << "direccion array[0] " <<&array<<endl;
	p++;
	cout << "puntero" <<p<<endl;
	
	
	cin.get();
	return 0;
}
