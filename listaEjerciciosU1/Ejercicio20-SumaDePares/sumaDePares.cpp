/* Nombre: Josue Isai Ventura
   Suma de numeros Pares e Impares  */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

// Declaracion  de variables    
int par = 0;

//Procesamiento Logico
for ( int valor = 0;  valor <=10; valor++ )
{

   if ( valor % 2 == 0)
   {
    par = par + valor;
   }

   cout << valor << " ";

}

//Salida
cout << endl;
cout << " Total Pares: " << par << endl;

    return 0;
}
