#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int numero = 0;
	
	srand(time(NULL));
	
	for(int i = 0; i < 20; i++)
	{
	
	numero = rand() % 5 + 1;
	
	cout<< " Numero al azar : "<<numero<<endl;
	}
	
	return 0;
}
