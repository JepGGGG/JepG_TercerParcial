#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> numeros;
  int numero;
  int contador = 0;
  int i;
  while (contador < 20 && numero != 0) {
    cout << "Introduce un número entero: ";
    cin >> numero;
    
    numeros.insert(numeros.begin(), numero);

    contador++;
     break;
  }

  cout << "Los números introducidos en orden inverso son: ";
  for (i = 0; i < numeros.size(); i++) {
    cout << numeros[i] << " ";
  }

  return 0;
}
