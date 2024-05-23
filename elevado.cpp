#include <iostream>

using namespace std;

int main() {
  double base;
  int potencia;

  cout << "Ingrese el número base: ";
  cin >> base;

  cout << "Ingrese la potencia: ";
  cin >> potencia;

  double resultado = pow(base, potencia);

  cout << base << " elevado a la potencia " << potencia << " es: " << resultado << endl;

  return 0;
}
