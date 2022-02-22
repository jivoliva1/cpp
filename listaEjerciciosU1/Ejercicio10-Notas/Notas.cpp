/* Nombre: Josue Ventura
   Notas  */
   
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

   //Declaracion de Variables
    int notas = 0;
    
    //Proceso Logico
    cout << " Ingrese su puntuacion Correspondiente : " << endl;
    cin >> notas;
   
    //Salida
    if ( notas > 100 || notas < 0 ){
        cout << " Ingrese una nota entre 0 y 100 ";
        return 0;
    }

    if ( notas >= 96 && notas <= 100 ){
        cout << " Tu nota es: A " << endl;
    }		        
	 
    if ( notas >= 91 && notas <= 95 ){
        cout << " Tu nota es: B " << endl;
    }

    if ( notas >= 81 && notas <= 90 ){
        cout << " Tu nota es: C " << endl;
    }

    if ( notas >= 71 && notas <= 80 ){
        cout << " Tu nota es: D- "<< endl;
    }

    if ( notas >= 61 && notas <= 70 ){
        cout << " Tu nota es: E " << endl;
    }

    if ( notas < 60 ){
        cout << " Tu nota es: F " << endl;
    }  


    return 0;
}
