#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion)
	 {
        case 1: 
            cout<< "Selecciono opcion 1" << endl;
            break;

        case 2: 
            cout<< "Selecciono opcion 2" << endl;
            break;
        
        case 3: 
            cout<< "Selecciono opcion 3" << endl;
            break;
        
        default:
            cout<< "Opcion Invalida X" << endl;
            break;
    } 

    return 0;
}
