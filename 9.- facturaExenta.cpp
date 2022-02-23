#include <iostream>

using namespace std;

int main(int argc, char* argv) {
	
    double subtot= 0;
    double tot= 0;
    double impto= 0.15;
    double calcDescto= 0;
    double calcImpto= 0;
    char factExent= 0;
    int descto= 0;

    cout<<"Ingrese el subtotal de la factura: ";
    cin>> subtot;
    
    cout<<"\nIngrese el descuento (0, 10, 15, 20): ";
    cin>>descto;
    
    cout<<"\nEs una factura exenta? escriba S o N: ";
    cin>>factExent;
    
    if (factExent == 'S' || factExent == 's')
    {
	    calcImpto= 0;
    }	
    else
    {
        calcImpto= (subtot-calcDescto) * 0.15;
    }

    calcDescto = (subtot*descto) / 100;
    tot= subtot-calcDescto + calcImpto;

    cout<<"\nEl total a pagar es: "<<tot;
    
	return 0;
}
