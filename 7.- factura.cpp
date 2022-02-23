#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double subtot= 0;
    double tot= 0;
    double impto= 0.15;

    cout<<"Ingrese el subtotal de la factura: ";
    cin>>subtot;

    tot= subtot+ (subtot*0.15);

    cout<<"\nEl total a pagar de la factura es: "<<tot;
   
    return 0;
}
