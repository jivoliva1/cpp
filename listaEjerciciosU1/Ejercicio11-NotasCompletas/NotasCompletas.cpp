/*  Nombre: Josue Ventura
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

    if ( notas > 100 || notas < 0 ){
        cout << " Ingrese una nota entre 0 y 100 ";
        return 0;
    }

    if ( notas >= 96 && notas <= 100){
        cout << " Excelente! tu nota es: A++ " << endl;
    }		        
	 
    if ( notas >= 91 && notas <= 95){
        cout << " Excelente! tu nota es: A+ " << endl;
    }

    if ( notas >= 86 && notas <= 90){
        cout << " Muy bien! tu nota es: A " << endl;
    }

    if ( notas >= 81 && notas <= 85){
        cout << " Muy Bien! tu nota es: A- "<< endl;
    }

    if ( notas >= 76 && notas <= 80){
        cout << " Bien! tu nota es: B+ " << endl;
    }

    if ( notas >= 71 && notas <= 75){
        cout << " Bien tu nota es: B " << endl;
    } 

    if ( notas >= 66 && notas <= 70){
        cout << " Aceptale tu nota es: B- " << endl;
    }
    
    if ( notas >= 61 && notas <= 65){
        cout << " Puedes mejorar! tu nota es: C+ " << endl;
    }

    if ( notas >= 56 && notas <= 60){
        cout << " Puedes mejorar! tu nota es: C " << endl;
    }

    if ( notas >= 51 && notas <= 55){
        cout << " Esfuerzate el doble! tu nota es: C- " << endl;
    }

    if ( notas >= 46 && notas <= 50){
        cout << " ESfuerzate el doble tu nota es: D+ " << endl;
    }

    if ( notas >= 41 && notas <= 45){
        cout << " Estudia mas! tu nota es: D " << endl;
    }

    if ( notas >= 36 && notas <= 40){
        cout << " Estudia mas! tu nota es: D- " << endl;
    }

    if ( notas >= 31 && notas <= 35){
        cout << " Estudia mas! tu nota es: E+ " << endl;
    }

    if ( notas >= 26 && notas <= 30){
        cout << " Animos a mejorar! tu nota es: E " << endl;
    }

    if ( notas >= 21 && notas <= 25){
        cout << " Animos a mejorar! tu nota es: E- " << endl;
    }

    if ( notas >= 16 && notas <= 20){
        cout << " Animos a mejorar! tu nota es: F+ " << endl;
    }
    
    if ( notas >= 11 && notas <= 15){
        cout << " Animos a mejorar! tu nota es: F " << endl;
    }

    if ( notas >= 6 && notas <= 10){
        cout << " Animos a mejorar! tu nota es: F- " << endl;
    }

    if ( notas >= 1 && notas <= 5){
        cout << " Animos a mejorar! tu nota es: D " << endl;
    }
    return 0;
}