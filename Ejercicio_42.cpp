#include <iostream>
#include <cstdlib> // Para usar la función rand()

using namespace std;

int main() {
  // Creamos el arreglo y le pasamos el tamaño ingresado
  int num[10];

  // Llenamos el arreglo con un ciclo for
  for (int i=0; i<10; i++) {
    num[i] = rand() % 100 + 1; // Generamos un número aleatorio entre 100 y 199
  }

  // Imprimimos los datos con un ciclo for
  for (int i=0; i<10; i++) {
    cout << "Los números aleatorios son: " << num[i] << endl;
  }

  return 0;
}
