/*  Josue Ventura
   menuSwitch  */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //Variables
    int numero = 0;
  
  
    //Entrada
    cout << " Escoja en el menu: " << endl;
    cout << "1) Color Rojo" << endl;
    cout << " 2) Color Azul " << endl;

    cin >> numero;

    //Proceso
    switch ( numero )
    {
    case 1: 
    {
        system ("cls");
        cout << " Color rojo " << endl;
        system ( " pause");
        break;
    }
    case 2:
    {
        system ("cls");
        cout << " Color azul " << endl;
        system ("pause");
        break;
    }    
    
    default:
    {
      
        cout << " Elige una opcion valida entre 1 y 2 " << endl;
        system ("pause");
        break;

    }

    }



    return 0;
}
