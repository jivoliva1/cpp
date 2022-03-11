#include <iostream>
using namespace std;



extern void agregarProducto(string descripcion, double precio, int cantidades);

void productos(int opcion)
{
    int opcionProducto;

    system ("cls");

    switch (opcion)     
    {
    case 1:
    {
        
             cout << " ***************** ";
             cout << " BEBIDAS CALIENTES " << endl;
             cout << " ***************** ";
             cout << "1- Capuccino " << endl;
             cout << "2- Expresso " << endl;
            
             cout << endl;
             cout << " Elegir Producto: "<< endl;
             cin >> opcionProducto;

           switch (opcionProducto)
           {
           case 1:    
             agregarProducto("1 Capuccino - L 40.00" , 1, 40 );
             break;

           case 2:
            agregarProducto( "2 Expresso - L 50.00", 1, 50 );
             break;
           
               default:
                {
                    cout << "opcion no valida"  << endl;
                    return;
                    break;
                }
           }

           cout << endl;
           cout << " Producto Agregado ";
           system ("pause");



           break;



    }

    case 2:
    {
        cout << " ************* ";
        cout << " BEBIDAS FRIAS " << endl;
        cout << " ************* ";
        cout << " Coca Cola " << endl;
        cout << " Sprite " << endl;
        cout << " Pina Colada " << endl;
        
    
             cout << endl;
             cout << " Elegir Producto: "<< endl;
             cin >> opcionProducto;

           switch (opcionProducto)
           {
           case 1:    
             agregarProducto("1 Coca Cola - L 20.00" , 1, 20 );
             break;

           case 2:
            agregarProducto( "2 Sprite - L 50.00", 1, 50 );
             break;
           
           case 3:
            agregarProducto( "3 Pina Colada - L 70.00", 1, 70 );
             break;
           

               default:
                {
                    cout << "opcion no valida"  << endl;
                    return;
                    break;
                }
           }

           cout << endl;
           cout << " Producto Agregado ";
           system ("pause");


        break;
    }

    case 3:
    {
        cout << " *********** " << endl;
        cout << " RESPOSTERIA ";
        cout << " *********** ";
        cout << " Pie de Manzana" << endl;
        cout << " Pie de Limon" << endl;
        cout << " Pie de Durazno" << endl;

           cout << endl;
             cout << " Elegir Producto: "<< endl;
             cin >> opcionProducto;

           switch (opcionProducto)
           {
           case 1:    
             agregarProducto("1 Manzana - L 90.00" , 1, 90 );
             break;

           case 2:
            agregarProducto( "2 Limon - L 80.00", 1, 80 );
             break;
           
           case 3:
            agregarProducto( "3 Pina Durazno - L 70.00", 1, 70 );
             break;
           

               default:
                {
                    cout << "opcion no valida"  << endl;
                    return;
                    break;
                }
           }

           cout << endl;
           cout << " Producto Agregado ";
           system ("pause");



    
    
            break;

    }


}