#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion= 0;

    while (true)
    {
        cout<<"1.- Internet " << endl;
        cout<<"2.- Copias" << endl;
        cout<<"3.- Miscelaneas" << endl;
        cout<<"0 - Salir" << endl;

        cout<< "Ingrese una opcion del menu: ";
        cin>> opcion;
        
        if (opcion == 0)
        {
            break;
        }
                
        switch (opcion)
        {
            case 1:
            {
                system ("cls");
                cout<<"Esta en el menu de Navegacion de Internet"<< endl;
                system ("pause");
                break;
            }
            case 2:
            {
                system ("cls");
                cout <<"Esta en el menu de Copias"<< endl;
                system ("pause");
                break;
            }
            case 3:
            {
                system ("cls");
                cout <<"Esta en el menu de Miscelaneas"<< endl;
                system ("pause");
                break;
            }

        default:
            {
                cout << "Ingrese una opcion valida ( 0, 1, 2, 3 )"<< endl;
                system ("pause");
                break;
            }
        }
    }

    cout << endl;
    cout << "Saliste del sistema";

    return 0;
}
