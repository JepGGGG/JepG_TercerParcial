#include <iostream>

using namespace std;

int main() {
  // Creamos la matriz de 3x3
  int matriz[3][3] = {{5, 6, 10}, {8, 11, 14}, {15, 16, 17}};

  // Mostramos los datos de la matriz
  cout << "\nMatriz de 3x3:\n";
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
