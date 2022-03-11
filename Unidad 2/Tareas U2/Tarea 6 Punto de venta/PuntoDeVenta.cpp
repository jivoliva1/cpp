#include <iostream>
using namespace std;

   extern void productos (int opcion);
   extern void imprimirFactura();

   void menu()
    {       
     int opcion = 0;

      while (true)
        {
 
            system ("cls");

            cout << "******";
            cout << " MENU ";
            cout << "******";
            cout << endl;


            cout << " 1 - Bebidas Calientes ";
            cout << " 2 - Bebidas Frias ";
            cout << " 3 - Reposteroa ";
            cout << " 3 - Imprimir Factura ";
            cout << " 0 - Salir ";
            
            cout << endl;
            cout << "Ingrese una opcion"<< endl;
            cin >> opcion;
            
            if ( opcion == 0 )
            {
                break;
            }
            if (opcion == 4)
            {
              imprimirFactura ();
            } else {
            productos (opcion);
            }
        }

    }


