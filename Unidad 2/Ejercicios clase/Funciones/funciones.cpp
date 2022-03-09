#include <iostream>
using namespace std;


void titulo()
{
    cout << " Escoja a su prefencia: " << endl;
}


void menu()
{
    cout << " Menu: 1)Sopa de Frijoles, 2)Sandwich, 3)Baleada " << endl;
    cout << endl;
    cout << " 4)Soda " << endl;
    cout << " 5)Jugo " << endl;
    cout << " 6)Agua " << endl;
}

void suma()
{
    int a = 5;
    int b = 15;
    int respuesta = 0;
    respuesta = a + b; 
    
    cout << respuesta;
}



int main(int argc, char const *argv[])
{
   titulo();
   menu();
   suma();

    return 0;
}
