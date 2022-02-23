/*  Josue Ventura
   Do While  */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //Variables
    int a = 5;
    int b = 15;

    //Proceso
    while ( a > b ){
        cout << " ( while) a > b " << endl;
        break;

    }
     do {
       
          cout << " (do While) a > b" << endl;
          break;
   
    } while ( a > b);
      

    return 0;
}
