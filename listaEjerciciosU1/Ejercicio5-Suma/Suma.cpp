#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int primerValor = 0;
    int segundoValor = 0;
    int resultado = 0;

    cout << " Ingrese un valor: " << endl;
    cin >> primerValor;

    cout << " Ingrese un segundo valor: " << endl;
    cin >> segundoValor;
    
    resultado = primerValor + segundoValor;

    cout << " Su respuesta es : " << resultado << endl;



    return 0;
}
