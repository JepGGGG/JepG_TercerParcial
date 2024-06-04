
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, y, z = 0;
    cout << "Ingrese un numero: " << endl;
    cin >> x;
    cout << "Ingrese el exponente: " << endl;
    cin >> y;
    z = pow(x, y);
    cout << "El resultado de la potencia es de: " << z << endl;

    return 0;
}
