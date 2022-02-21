 /*  Nombre: Josue Ventura
    Ejercicio Calculadora  */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    	//Deeclaracion de variables
    int suma        = 0;
    int resta       = 0;
    int multiplicar = 0;
    float dividir   = 0;
    float a         = 0;
    float b         = 0;
    int numero      = 0;
    
    //Entrada de datos
    cout << " Ingrese un digito " << endl;
    cin >> a;
    
    cout << " Ingrese un digito " << endl;
    cin >> b;
    
    cout << " \n Escoja el numero acorde a la operacion que guste: " << endl;
    cout << " \n 1)SUMAR  -  2)RESTAR  -  3)MULTIPLICAR  -  4)DIVIDIR " << endl;
    cin >> numero;
    
    
    //Proceso y desarrollo
    if (numero == 1)
    {
	  suma = a + b;
      cout << " Tu resultado es : " << suma << endl;
    }
	else

      if (numero == 2)
      {
    	 resta = a - b;
     	 cout << " Tu resultado es : " << resta << endl;
	  }
      else
      
      	if (numero == 3)
       	{
       		multiplicar = a * b;
       		cout << " Tu respuesta es : " << multiplicar << endl;
	    }
	    else 
	       
	       if (numero == 4)
	        {
			  
	           dividir = a / b;
	           cout  << " Tu respuesta es : " << dividir << endl;
	        }
	       else  
               cout << "ERROR" << endl;
			   
			        
	

    
    return 0;
}
