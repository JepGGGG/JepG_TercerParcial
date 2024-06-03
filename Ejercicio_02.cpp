#include <iostream>
using namespace std;

int main()
{
    float unidad, subtotal = 0, precio, descuento, iva, total;
    cin >> unidad;
    cout << "Cantidad de unidades: \n" << unidad;
    cin >> precio;
    cout << "\nPrecio: " << precio;
    subtotal = unidad * precio;
    if (subtotal < 1000)
    {
        descuento = subtotal * 0;
    }
    if (subtotal > 1000)
    {
        descuento = subtotal * 0.1;
        cout << "\nEl descuento es de: " << descuento;
    }
    if (subtotal > 2000)
    {
        descuento = subtotal * 0.2;
        cout << "\nEl descuento es de: " << descuento;
    }
    if (subtotal > 3000)
    {
        descuento = subtotal * 0.3;
        cout << "\nEl descuento es de: " << descuento;
    }
    iva = subtotal * 0.16;
    total = subtotal - descuento + iva;
    cout << "\nEl total es de: " << total;

    return 0;
}
