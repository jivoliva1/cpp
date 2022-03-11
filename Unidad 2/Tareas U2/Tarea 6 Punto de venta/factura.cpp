#include <iostream>
using namespace std;

double subtotal;
string listado;
double valorTasa;
double total;
void agregarProducto(string descripcion, double precio, int cantidades)
{
    listado = listado + descripcion + '\n';
    subtotal = subtotal + (cantidades * precio );    
    valorTasa =  valorTasa + (precio * 0.15);
    total = subtotal - valorTasa;   

   
}
 
  void imprimirFactura()
 {
   system ("cls");
   cout << " *******" << endl;
   cout << " FACTURA " << endl;
   cout << " *******" << endl;
   cout << endl;

   cout << " Productos " << endl;
   cout << listado;

   cout << " Subtotal: " << subtotal;
   cout << endl;
   cout << endl;
   
   cout << " Total: " << total;
   cout << endl;
   cout << endl;
   

   system ("pause");


 }