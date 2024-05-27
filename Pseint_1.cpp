#include <iostream>

using namespace std;

int main() {
  // Creamos el arreglo 'num' de 5 posiciones
  int num[5];

  // Pedimos datos para cada posición del arreglo
  for (int i = 0; i < 5; i++) {
    cout << "Digite un número para la posición " << i << ": ";
    cin >> num[i];
  }

  // Imprimimos los datos del arreglo
  for (int i = 0; i < 5; i++) {
    cout << "El dato en la posición " << i << " es: " << num[i] << endl;
  }

  return 0;
}
