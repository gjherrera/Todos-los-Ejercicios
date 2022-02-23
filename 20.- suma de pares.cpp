#include <iostream>
 
 
using namespace std;

int main(int argc, char const *argv[])
{
    int i, suma=0;
	 	
 	for( int i = 1; i <= 10; i++ ){
        if( i % 2 == 0 ) suma += i;
		 }
		
	cout<<"La suma de los numeros pares es: "<<suma<<endl;
	
	return 0;
    }
