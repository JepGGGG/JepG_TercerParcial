#include <iostream>

using namespace std;

int main() {
  // Pedimos el tamaño del vector (arreglo)
  int t;
  cout << "Digite el tamaño del vector (arreglo): ";
  cin >> t;

  // Creamos el vector y lo inicializamos con 0
  vector<int> vector(t, 0);

  // Llenamos el vector con un ciclo for
  int acum = 0;
  for (int i = 0; i < t; i++) {
    cout << "Digite un número: ";
    cin >> vector[i];
    acum += vector[i]; // Acumulamos los números y los sumamos
  }

  // Imprimimos todos los datos del vector
  cout << "\nElementos del vector:\n";
  for (int i = 0; i < t; i++) {
    cout << vector[i] << " ";
  }

  // Resultado total
  cout << "\n\nSuma total: " << acum << endl;

  return 0;
}
