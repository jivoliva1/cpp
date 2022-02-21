/* Nombre: Josue Ventura
   Factura precios   */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Declaracion de variables
    double valorInicial     = 0;
    double total            = 0;

    double valorDescuento   = 0;

    double descuentoElegido = 0;
    double escojerDescuento = 0;

    // Entrada
    cout << " Ingrese una cantidad: " << endl;
    cin >> valorInicial;
    
    cout << " Eliga el descuento de su preferencia: 1)10  2)20  3)50  o  escribe el descuento de tu preferencia: " << endl;
    cin >> escojerDescuento;
    
    // Proceso
    valorDescuento = ( valorInicial * escojerDescuento) /100;
    cout << " Su descuento es : " << valorDescuento << endl;
    

    if ( escojerDescuento == 1){
        valorDescuento = ( valorInicial * 10 ) /100;   
        cout << " Su descuento es:  L." << valorDescuento << endl;
    }
    else
         if ( escojerDescuento == 2 ){
            valorDescuento = ( valorInicial * 20 ) /100;
            cout << " Su descuento es:  L." << valorDescuento << endl;
         }
        else
             if ( escojerDescuento == 3 ){
                valorDescuento = ( valorInicial * 30 ) /100;
                cout << " Su descuento es:  L." << valorDescuento << endl;
             }

  
    
    // Salida
    total = valorInicial - valorDescuento;
    cout << " su Total es:  L." << total;


    return 0;
}