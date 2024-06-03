#include <iostream>

using namespace std;

int main() {
  // Definimos la matriz con 2 filas y 2 columnas
  int matriz[2][2];

  // Asignamos valores a los elementos de la matriz
  matriz[0][0] = -10; // Fila 1, Columna 1
  matriz[0][1] = -20; // Fila 1, Columna 2
  matriz[1][0] = -30; // Fila 2, Columna 1
  matriz[1][1] = -40; // Fila 2, Columna 2

  // Imprimimos los datos de la matriz
  cout << "Matriz:" << endl;
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  // Impresión de datos específicos
  cout << "\nEl dato en la fila 1, columna 1 es: " << matriz[0][0] << endl;
  cout << "El dato en la fila 1, columna 2 es: " << matriz[0][1] << endl;
  cout << "El dato en la fila 2, columna 1 es: " << matriz[1][0] << endl;
  cout << "El dato en la fila 2, columna 2 es: " << matriz[1][1] << endl;

  return 0;
}
