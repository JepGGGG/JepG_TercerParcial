#include <iostream>
using namespace std;
int main()
{
    int unidad, subtotal, precio;
    cin >> unidad;
    cout << "Cantidad de unidades: \n" << unidad;
    cin >> precio;
    cout << "Precio: \n"<< precio;
    subtotal = unidad * precio;
    cout <<subtotal;
    return 0;
}
