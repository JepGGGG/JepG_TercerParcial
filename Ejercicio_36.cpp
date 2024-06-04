#include <iostream>

using namespace std;

int main() {
  // Pedimos el tamaño del arreglo
  int n;
  cout << "Digite el tamaño del arreglo: ";
  cin >> n;

  // Creamos un arreglo llamado 'num' de tipo entero con 'n' elementos
  int num[n];

  // Pedimos datos para cada posición del arreglo
  for (int i = 0; i < n; i++) {
    cout << "Digite un número para la posición " << i << ": ";
    cin >> num[i];
  }

  // Imprimimos los datos del arreglo
  for (int i = 0; i < n; i++) {
    cout << "El dato en la posición " << i << " es: " << num[i] << endl;
  }

  return 0;
}
