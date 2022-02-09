//Nombre: Josue Ventura 
//Fecha: 08/02/22
//facturaExenta
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

//Declaracion de variables
double total = 0;    
double valorIngreso = 0;
double valorTasa = 0.15;
double valorDescuento = 0;
char impuesto = 0;
int descuento = 0;

//Entrada de datos
cout << " Ingrese el subtotal a pagar: " << endl;
cin >> valorIngreso;

cout << " Aplique desuento : ( 0, 10, 20, 50, 70 ) " << endl;
cin >> descuento;

valorDescuento = (valorIngreso * descuento) / 100 ;
valorTasa =  (valorIngreso - valorDescuento) * 0.15;

//Proceso Logico y SALIDA.
cout << " Exentar Tasa? = (s) si - (n) no " << endl;
cin >> impuesto;

if ( impuesto == 's' || impuesto == 'S' ){
	total = valorIngreso - valorDescuento;
	cout << " Su total es : " << total << endl;
}
  else 
       if ( impuesto == 'n' || impuesto == 'N'){
       	   total = valorIngreso - valorDescuento + valorTasa;
           cout << " Su total es : " << total << endl;
	   }  
        else 
       

    return 0;
}

