#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double subtot = 0;
    double tot = 0;
	double impto = 0.15;
	int desc = 0;
	
	cout<<"Ingrese el subtotal de la Factura: ";
	cin>> subtot;	
	
	cout<<"\nIngrese el descuento (0,10,15,20): ";
	cin>>desc;
	
	tot=subtot+(subtot* 0.15);
	 
	cout<<"\nEl Total a Pagar es: "<<tot;
		
    return 0;
}
