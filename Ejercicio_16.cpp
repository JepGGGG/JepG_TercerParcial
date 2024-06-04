#include <iostream>

using namespace std;

int main() {
    int edad;
    cin >> edad;

    if (edad > 18) {
        cout << "Mayor de edad\n"; 
    } else if (edad > 15) { 
        cout << "Juvenil\n";
    } else {
        cout << "Menor de edad\n";
    }

    return 0;
}
