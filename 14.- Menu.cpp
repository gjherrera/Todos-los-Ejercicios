#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true)
    {
        system ("cls");
		cout << "Ingrese una opcion.:" << endl;
        cout << "1.- Ventas" << endl;
        cout << "2.- Productos" << endl;
        cout << "3.- Reportes" << endl;
        cout << "0.- Salir" << endl;

        cout << "Ingrese una opcion del menu: ";
        cin >> opcion;


        if ( opcion == 1 )
        {
            system ("cls"); 
            cout  << "**VENTAS**" << endl;
            cout<<"-----------"<<endl;
            system ("pause");
        }
        else
        {
        	if ( opcion == 2 )
            {
            system ("cls");
            cout  <<  "***PRODUCTOS***" << endl;
            cout<<"---------------"<<endl;
            system ("pause");
            }
        else
		{
			if ( opcion == 3 )
            {
            system ("cls");
            cout  << "***REPORTES***" << endl;
            cout<<"--------------"<<endl;
            system ("pause");
            }
		else
		{
			if (opcion == 0)
            {
                break;
            }
        else
        {
        	system("cls");
			cout<<"Opcion Invalida"<<endl;
        	system("pause");
		       	
    	}				          
    	}
     }
   }
   }  

   return 0;
}
