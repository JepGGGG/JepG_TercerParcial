#include <iostream>
using namespace std;
int main()
{
    float f, c;
    cout << "Ingrese los grados Farenheit: " << endl;
    cin >> f;
    c = (f - 32) * 5 / 9;
    cout << "El resultado en grados Celsius es de: " << c << endl;

    return 0;
}
