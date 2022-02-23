/*  Josue Ventura
    MENU  */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //Entrada de Datos
    int eleccion = 0;
    
    //Proceso y salida
    while ( true ){
    system ( "cls");
    cout << " !MENU! " << endl;
    cout << "  **** " << endl;
    
    cout << " Bienvenido! " << endl;
    cout << " Elige la opcion de tu preferencia " << endl;

    cout << " 1) Chocolate " << endl;
    cout << " 2) Vainilla " << endl;
    cout << " 3) Fresa " << endl;
    cout << " 0) = Salir " << endl; 
    cin >> eleccion; 


    if ( eleccion == 1 ){
    system ("cls");    
    cout << " Elegiste Chocolate que bien! " << endl;
    system ("pause");
    }
      else 
           if ( eleccion == 2 ){
           system ("cls");    
           cout << " Elegiste Vainilla que bien! " << endl;
           system ("pause");
    }
      else
           if ( eleccion == 3 ){
           system ("cls");    
           cout << " Elegiste Fresa que bien! " << endl;
           system ("pause");
    }
       else
           if ( eleccion == 1 ){
           system ("cls");    
           cout << " Elegiste Chocolate que bien! " << endl;
           system ("pause");
    }
           else 
               if ( eleccion == 0 ){

                   break;
            
            }

    }

    cout << " Saliste del Menu " << endl;
    return 0;
}

