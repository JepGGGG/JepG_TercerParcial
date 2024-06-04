#include <iostream>
using namespace std;

int main() {
    int x = 0;
    int divisor = 0; 

    cout << "Ingresa divisor: ";
    cin >> divisor;

    if (divisor != 0) {
        x = 4 / divisor;
        cout << "Resultado: " << x << endl;
    } else {
        cout << "No se puede dividir entre 0" << endl;
    }

    return 0;
}
