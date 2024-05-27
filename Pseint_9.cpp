#include <iostream>
#include <string> // For string manipulation

using namespace std;

int main() {
    int n; // Number of countries

    // Get the number of countries from the user
    cout << "Digite el numero de paises: ";
    cin >> n;

    // Create an array to store the countries
    string paises[n];

    // Fill the array with country names
    for (int i = 0; i < n; i++) {
        cout << "Digite el nombre del pais " << i + 1 << ": ";
        cin.ignore(); // Clear previous newline character
        getline(cin, paises[i]); // Get the entire line as a string
    }

    // Get the position to display the country
    int pos;
    cout << "Digite la posicion del pais que desea mostrar: ";
    cin >> pos;

    // Check if the position is valid
    if (pos >= 0 && pos < n) {
        // Display the country at the specified position
        cout << "El pais que hay en la posicion " << pos << " es: " << paises[pos] << endl;
    } else {
        cout << "Error: La posicion ingresada no es valida." << endl;
    }

    return 0;
}
