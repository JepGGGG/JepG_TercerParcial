#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int codigo, farenheit, cord_x, cord_y;
    codigo = 3467;
    farenheit = 123.456;
    cord_x = 525;
    cord_y = 725;
    a = b = c = 45;
    a = (a = (c = 40));

    cout << "Valor de la variable codigo: " << codigo << endl;
    cout << "Valor de la variable FARENHEIT" << farenheit << endl;
    cout << "El valor de la variable CORD_X " << cord_x << endl;
    cout << "El valor de la variable CORD_Y " << cord_y << endl;
    cout << "El valor de la variable A " << a << endl;
    cout << "El valor de la variable B " << b << endl;
    cout << "El valor de la variable C " << c << endl;

        return 0;
}
