#include <iostream>

using namespace std;

int main() {
    int m = 45, n = 75;
    cout << "m=" << m << ", n=" << n << endl; // Un solo cout
    
    // Incremento y decremento en la misma línea
    cout << "m=" << ++m << ", n=" << --n << endl; 

    // Incremento y decremento en la misma línea
    cout << "m=" << m++ << ", n=" << n-- << endl;

    return 0;
}
