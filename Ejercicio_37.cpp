#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, b, B, h;
    float z;
    cout << "CALCULO DE AREAS\n";
    cout << "1.Calcular el area de un triangulo.\n";
    cout << "2.Calcular el area de un trapecio.\n";
    cout << "3.Calcular el area de un rectangulo.\n";
    cout << "Que desea saber???";
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "Ingrese la base primero y despues la haltura: " << endl;
        cin >> b;
        cin >> h;
        z = (b * h) / 2;
        cout << "El area del triangulo es: " << z << endl;
        break;
    case 2:
        cout << "Ingrese primero la base mayor, despue la base menor y al final la haltura: " << endl;
        cin >> B; 
        cin >> b; 
        cin >> h;
        z = ((B + b) * h) / 2;
        cout << "El area del trapecio es de: " << z << endl;
        break;
    case 3:
        cout << "Ingrese el largo y despues el ancho del rectangulo: " << endl;
        cin >> b; 
        cin >> h;
        z = b * h;
        cout << "El area del rectangulo es: " << z << endl;
        break;
    default:
        break;
    }

    return 0;
}
