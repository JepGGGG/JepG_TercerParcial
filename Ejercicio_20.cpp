#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double radio, perimetro; 

    cout << "Introduzca el radio: "; 
    cin >> radio;

    perimetro = 2 * M_PI * radio; 
    cout << perimetro << '\n'; 

    return 0;
}
