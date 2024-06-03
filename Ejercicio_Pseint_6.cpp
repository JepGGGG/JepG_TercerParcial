#include <iostream>

using namespace std;

int main() {
  // Creamos dos arreglos en una sola instrucción
  string arreglo1[2] = {"Fernando", "Oscar"};
  int arreglo2[3] = {74, 56, 10};

  // Imprimimos todos los datos del arreglo 1
  cout << "Arreglo 1" << endl;
  for (int i = 0; i < 2; i++) {
    cout << "El dato en la posición " << i << " es: " << arreglo1[i] << endl;
  }

  // Imprimimos los datos del arreglo 2
  cout << "\nArreglo 2" << endl;
  for (int i = 0; i < 3; i++) {
    cout << "El dato en la posición " << i << " es: " << arreglo2[i] << endl;
  }

  return 0;
}
