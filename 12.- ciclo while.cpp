#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a=10;
    int b= 0;

    while (a > b)
    {
        cout<< "+";
        
        b= b+1;
        
        if (b==8){
        	
        	break;
		}
    }
    
    return 0;
}
