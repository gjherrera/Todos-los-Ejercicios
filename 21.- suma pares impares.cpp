#include <iostream>
 
 
using namespace std;

int main(int argc, char const *argv[])
{
    int i, resta=0, suma=0, tot=0;
 	
 	for( int i = 1; i <= 10; i++ ){
        if( i % 2 == 0 ) suma += i;
		 }
	for(int i=1; i<=10; i++){
 		if(i%2 !=0){
 			resta +=i;
 			tot=suma+resta;
		 } 	
 		
	}
	
	cout<<"La suma de los numeros pares es: "<<suma<<endl;
	cout<<"La suma de los numeros impares es:"<<resta<<endl;
	cout<<"La suma de todos los numeros es: "<<tot<<endl;
	
	return 0;
    }
