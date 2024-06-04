#include <iostream>
#include <string>

using namespace std; // Espacio de nombres estándar para evitar std::

bool validar_credenciales(const string& nombre, const string& grupo) {
    return (nombre == "JepG" && grupo == "2bmpg");
}

void mostrar_mensaje_bienvenida(const string& nombre) {
    cout << "Bienvenido al sistema, " << nombre << "!" << endl;
}

void calcular_factura() {
    int total = 0;
    int cantidad_articulo, precio_unidad;

    for (int i = 1; true; i++) { 
        cout << "Ingrese la cantidad del producto " << i << " (ingrese 0 para terminar): ";
        cin >> cantidad_articulo;

        if (cantidad_articulo == 0) {
            cout << "Finalizando la factura." << endl;
            break; // Salir del ciclo con break
        } else {
            cout << "Ingrese el precio unitario del producto " << i << ": ";
            cin >> precio_unidad;

            if (cantidad_articulo > 0 && precio_unidad > 0) {
                total += cantidad_articulo * precio_unidad;
            } else {
                cout << "Error: La cantidad y el precio deben ser números positivos." << endl;
                i--; // Decrementar el contador para repetir el artículo
            }
        }
    }

    cout << "El importe total de la factura es: " << total << endl;
}

int main() {
    string nombre, grupo;
    int intentos = 0;

    do {
        cout << "Ingrese su nombre: ";
        cin >> nombre;

        cout << "Ingrese su grupo del cb: ";
        cin >> grupo;

        if (validar_credenciales(nombre, grupo)) {
            mostrar_mensaje_bienvenida(nombre);
            
            do {
                calcular_factura();
                char respuesta;
                cout << "Desea realizar otra factura? (s/n): ";
                cin >> respuesta;
                
                if (tolower(respuesta) != 's') { // Convertir a minúscula para facilitar la comparación
                    cout << "Gracias por utilizar el sistema " << nombre << "!" << endl;
                    break;
                }
            } while (true); // Bucle infinito hasta que el usuario no quiera hacer más facturas
            
            break; // Salir del bucle de intentos
        } else {
            intentos++;
            cout << "Nombre o grupo incorrectos. Intentos restantes: " << (3 - intentos) << endl;
        }
    } while (intentos < 3);

    if (intentos == 3) {
        cout << "Ha superado el número máximo de intentos permitidos." << endl;}

    return 0;
}

