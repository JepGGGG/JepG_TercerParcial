#include <iostream>
#include <limits> // For input validation

using namespace std;

int main() {
    int size;

    // Get valid array size from user
    while (true) {
        cout << "Digite el numero de elementos (tamanio): ";
        if (cin >> size) {
            if (size > 0) {
                break; // Valid size entered, exit loop
            } else {
                cout << "Error: El tamanio debe ser un numero positivo." << endl;
            }
        } else {
            cout << "Error: Entrada invalida. Ingrese un numero entero." << endl;
            cin.clear(); // Clear the error state from cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
    }

    int num[size];

    // Fill the array with user input
    for (int i = 0; i < size; i++) {
        cout << "Digite numero " << i + 1 << ": ";
        if (cin >> num[i]) {
            // Input validation (optional)
            // if (num[i] < 0) {
            //     cout << "Error: Solo se permiten numeros positivos." << endl;
            //     // Handle invalid input (e.g., prompt for re-entry)
            // }
        } else {
            cout << "Error: Entrada invalida. Ingrese un numero entero." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    // Count positive numbers
    int countPositive = 0;
    for (int i = 0; i < size; i++) {
        if (num[i] > 0) {
            countPositive++;
        }
    }

    // Print results
    cout << "La cantidad de numeros positivos es: " << countPositive << endl;

    return 0;
}
