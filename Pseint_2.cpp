#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Pedimos el número de posiciones (tamaño del arreglo)
  int n;
  cout << "Digite el número de posiciones: ";
  cin >> n;

  // Creamos un vector dinámico llamado 'personas' para almacenar nombres
  vector<string> personas(n);

  // Pedimos datos para cada posición del arreglo
  for (int i = 0; i < n; i++) {
    cout << "Digite un nombre para la posición " << i << ": ";
    cin >> personas[i];
  }

  // Imprimimos los datos del arreglo
  for (int i = 0; i < n; i++) {
    cout << "El dato en la posición " << i << " es: " << personas[i] << endl;
  }

  return 0;
}
