/*  Josue Ventura
    switch  */   

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //Variables
    int Valor = 0;

    cout << " Ingrese el digito de su preferencia " << endl;
    cin >> Valor;
    
    //Proceso Logico
    switch ( Valor)
    {
      case 1:
      cout << " Ganaste L.100 " << endl;
             break;

      case 2:
      cout << " Ganaste L.500 " << endl;
             break;

      case 3:
      cout << " Ganaste! L.1000000 " << endl;
             break;

        default:
        cout << " Ingrese un digito del 1 al 3 " << endl;
        break;

    }


    return 0;
}
