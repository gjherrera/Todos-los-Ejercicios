#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        cout<<"valor de i:"<<i<<endl;
    }

    cout<< endl;

    for (int i = 0; i <= 9; i++)
    {
        cout<< i << "  ";
    }
    cout << endl;
    cout << endl;
    
    for (int i = 9; i >= 0; i--)
    {
        cout<< i << "  ";
    }
    cout << endl;
    cout << endl;

    for (int i = 1; i < 1000000; i++)
    {
        cout << i << "  ";

        if (i == 100)
        {
            break;
        }
        
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < 51; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }

        cout<< i << "  ";
    }
    
    return 0;
}
