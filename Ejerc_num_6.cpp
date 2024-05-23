
#include <iostream>
using namespace std;
int main()
{
    float f, c;
    cout << "Ingrese los grados farenheit: ";
    cin >> f;
    c = (f - 32) * 5 / 9;
    cout << "\nEl resultado en grados celsius es: " << c;

    return 0;
}
