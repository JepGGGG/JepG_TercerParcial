#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Ingrese 2 numeros: " << endl;
    cin >> x >> y;

    if (y == 0) {
        cout << "Error: División por cero no permitida." << endl;
    } else {
        // Usamos double para mayor precisión en el resultado de la división
        double z1 = static_cast<double>(x) / y; 
        cout << z1 << endl;
    }

    return 0;
}
