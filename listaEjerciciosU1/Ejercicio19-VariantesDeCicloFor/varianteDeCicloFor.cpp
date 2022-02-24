/* Josue Ventura
   Variates de ciclo For */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    //Proceso
    for ( int j = 0; j <= 10; j ++)
    {
        cout << j << " ";
    }

    cout << endl;
    cout << endl;

    for ( int j = 15; j >= 0; j --)
    {
        cout << j << " ";
    }

    cout << endl;
    cout << endl;
     
    for ( int j = 0; j <= 120; j ++)
    {
        cout << j << " ";
        if ( j == 100 )
        {
            break;
        }
    }

    cout << endl;
    cout << endl;
    
    for ( int j = 0; j <= 10; j ++)
    {
        cout << j << " ";
        if ( j == 3 || j == 8)
        {
           continue; 
        }
    }

    cout << endl;
    cout << endl;

    return 0;
}
