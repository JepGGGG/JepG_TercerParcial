#include <iostream>

using namespace std;

int main() {
  // Solicitamos el número de filas
  int f;
  cout << "Digite el número de filas: ";
  cin >> f;

  // Solicitamos el número de columnas
  int c;
  cout << "Digite el número de columnas: ";
  cin >> c;

  // Creamos la matriz dinámica
  int** matriz = new int*[f]; // Reservamos memoria para las filas
  for (int i = 0; i < f; ++i) {
    matriz[i] = new int[c]; // Reservamos memoria para las columnas de cada fila
  }

  // Llenamos la matriz con datos ingresados por el usuario
  for (int i = 0; i < f; ++i) {
    for (int j = 0; j < c; ++j) {
      cout << "Digite el dato para la fila " << i + 1 << ", columna " << j + 1 << ": ";
      cin >> matriz[i][j];
    }
  }

  // Mostramos los datos de la matriz
  cout << "\nLos datos de la matriz son:\n";
  for (int i = 0; i < f; ++i) {
    for (int j = 0; j < c; ++j) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  // Liberamos la memoria asignada dinámicamente
  for (int i = 0; i < f; ++i) {
    delete[] matriz[i];
  }
  delete[] matriz;

  return 0;
}
