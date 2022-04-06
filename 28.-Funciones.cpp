#include <iostream>

using namespace std;


int sumar()
{
	return 5 + 7;
}

string nombrecompleto ()
{
	return "Pablo Perez";
}

int main ()
{
	int resultado = 0;
	string nombreyapellido = nombrecompleto();
	resultado = sumar();
	
	cout << resultado <<endl;
	cout << nombreyapellido<<endl;
	
	return 0;
}
