#include <iostream>

using namespace std;

int main() {
  // Pedimos el tamaño del vector 1
  int t1;
  cout << "Digite el tamaño del vector 1: ";
  cin >> t1;

  // Inicializamos acumuladores en cero
  int acum1 = 0;
  int acum2 = 0;

  // Pedimos los datos para el vector 1
  for (int i = 0; i < t1; i++) {
    cout << "Digite un número: ";
    cin >> num;
    vector1[i] = num; // Almacenamos el número en el vector 1
    acum1 += vector1[i]; // Acumulamos la suma del vector 1
  }

  // Pedimos el tamaño del vector 2
  int t2;
  cout << "\nDigite el tamaño del vector 2: ";
  cin >> t2;

  // Pedimos los datos para el vector 2
  for (int i = 0; i < t2; i++) {
    cout << "Digite un número: ";
    cin >> num;
    vector2[i] = num; // Almacenamos el número en el vector 2
    acum2 += vector2[i]; // Acumulamos la suma del vector 2
  }

  // Creamos el vector para almacenar el resultado
  int vector3[2];

  // Calculamos y almacenamos el resultado total
  vector3[0] = acum1;
  vector3[1] = acum2;

  // Mostramos el resultado total
  cout << "\nResultado total:\n";
  for (int i = 0; i < 2; i++) {
    cout << vector3[i] << " ";
  }

  return 0;
}
