#include <stdio.h>

#define FILAS 4
#define COLUMNAS 3

int main() {
  int tabla[FILAS][COLUMNAS];
  int suma_columnas[COLUMNAS];

  // Leer valores de la tabla
  for (int fila = 0; fila < FILAS; fila++) {
    for (int columna = 0; columna < COLUMNAS; columna++) {
      printf("Introduce un valor para la fila %d, columna %d: ", fila + 1, columna + 1);
      scanf("%d", &tabla[fila][columna]);
    }
  }

  // Calcular suma de cada columna
  for (int columna = 0; columna < COLUMNAS; columna++) {
    suma_columnas[columna] = 0;
    for (int fila = 0; fila < FILAS; fila++) {
      suma_columnas[columna] += tabla[fila][columna];
    }
  }

  // Encontrar la mayor suma de columna
  int mayor_suma = suma_columnas[0];
  for (int columna = 1; columna < COLUMNAS; columna++) {
    if (suma_columnas[columna] > mayor_suma) {
      mayor_suma = suma_columnas[columna];
    }
  }

  // Mostrar la mayor suma de columna
  printf("La mayor suma de columna es: %d\n", mayor_suma);

  return 0;
}
