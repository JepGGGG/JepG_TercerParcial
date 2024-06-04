#include <iostream>
using namespace std;
int main(){
    int fecha, edad;
    cout << "Hola" << endl;
    cout << "Introduzca el año en que nacio: " << endl;
    cin >> fecha;
    edad = 2024 - fecha;
    cout <<"Si usted nacio en: " << fecha << ", en este año cumple: " << edad << endl;


    return 0;
}
