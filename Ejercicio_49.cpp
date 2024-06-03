#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros;
    int numero;

    cout << "Introduce 20 numeros enteros:" << endl;

    for (int i = 0; i < 20; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numero;

        if (numero == 0) {
            break; 
        }

        numeros.push_back(numero); 
    }

    cout << "Los numeros introducidos en orden inverso son: ";

    for (int i = numeros.size() - 1; i >= 0; i--) { 
        cout << numeros[i] << " ";
    }

    return 0;
}
