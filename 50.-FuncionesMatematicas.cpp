#include <iostream>
#include <math.h>
#define Pi 3.1416

using namespace std;

int main()
{
	double Numero = 0;
	double Seno = 0;
	double Coseno = 0;
	double Tangente = 0;
	
	Numero = 2*Pi;
	Seno = sin(Numero);
	Coseno = cos(Numero);
	Tangente = tan(Numero);
	
	cout<<"Numero: "<< Numero <<endl;
	cout<<"Seno:   "<< Seno <<endl;
	cout<<"Coseno: "<< Coseno <<endl;
	cout<<"Tangente: "<< Tangente <<endl;
	
	return 0;
}
