/* Nombre: Josue Ventura
   Factura precios   */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Declaracion de variables
    double valorInicial = 0;
    double total = 0;
    
    // Entrada
    cout << " Ingrese una cantidad: " << endl;
    cin >> valorInicial;
    
    // Proceso
    total = valorInicial + ( valorInicial * 0.15);
    
    // Salida
    cout << " El precio total es: " << total << endl;


    return 0;
}
