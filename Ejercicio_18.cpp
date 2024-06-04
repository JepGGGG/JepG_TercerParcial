#include <iostream>

using namespace std;

int main() {
    float f, c;

    cout << "Ingrese los grados Fahrenheit: "; 
    cin >> f;

    c = (f - 32) * 5.0f / 9.0f; 
    cout << "El resultado en grados Celsius es de: " << c << '\n'; 

    return 0;
}
