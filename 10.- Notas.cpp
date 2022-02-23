#include <iostream>

//programa modificado cuando evaluaban en la primaria
//se maneja el procedimiento como se puede ver en el cpp notas completas en el repositorio

using namespace std;

int main(int argc, char const *argv[])
{
    int nota= 0;

    cout<<"Ingrese la nota obtenida: ";
    cin>> nota;

    if (nota > 100 || nota < 0)
    {
        cout<<"Ingrese una nota entre 0 - 100 "; 
        return 0;
    }

    if (nota >= 90 && nota <= 100)
    {
        cout<<"\nSobresaliente!!!!!"; 
    }

    if (nota >= 75 && nota <= 89)
    {
        cout<<"\nMuy Bueno"; 
    }

    if (nota >= 60 && nota <= 74)
    {
        cout<<"\nBueno"; 
    }

    if (nota < 60)
    {
        cout<<"\nReprobado!!!!"; 
    }

    return 0;
}
