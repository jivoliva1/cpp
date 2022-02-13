//Nombre: Josue Isai Ventura
//Fecha: 13/02/22
//Suma de numeros Pares e Impares
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

// Declaracion  de variables    
int impar = 0;
int par = 0;
int valor = 0;
int total = 0;

//Procesamiento Logico
for ( valor = 0;  valor <=10; valor++ )
{

   if ( valor % 2 == 0)
   {
    par = par + valor;
   }
   else
       if ( valor % 2 == 1)
       {
        impar = impar + valor;   
       }

   total = par + impar;
   cout << valor << " ";

}

//Salida
cout << endl;
cout << " Total Pares: " << par << endl;
cout << " Total Impares: " << impar << endl;
cout << " Total Sumatoria: " << total << endl;

    return 0;
}
