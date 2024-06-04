#include <iostream>
using namespace std;

int main(){
    int dinero;
    float interes, ci, cf = 0;
    cout << "Ingrese el dinero depositado: " << endl;
    cin >> dinero;
    cout << "Ingrese el tipo de interes: " << endl;
    cin >> interes;
    ci = dinero * interes;
    cf = dinero + ci;
    cout << "El dinero de interes es de: $" << ci;
    cout << "El sueldo bruto es de: $" << cf;

    return 0;
}
