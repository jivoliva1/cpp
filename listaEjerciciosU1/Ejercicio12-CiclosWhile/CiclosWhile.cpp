/*  Nombre Josue Ventura
    CiclosWhile  */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 20;
    int b = 15;


    while ( a > b )
    {
        cout << " Ingrese el valor de a: " << endl;
        cin >> a;
    }
    
    cout << " Felicidades saliste del ciclo! " << endl;

    return 0;
}
