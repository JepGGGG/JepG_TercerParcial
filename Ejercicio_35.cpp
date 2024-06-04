#include <iostream>
using namespace std;
int main()
{
    float h, x, hf, s, sueldo, z, a, hf2;
    cout << "Cuanto le pagan la hora: " << endl;
    cin >> x;
    cout << "Ingrese las horas trabajadas: " << endl;
    cin >> h;
    if (h > 50)
    {
        hf = h - 40;
        z = 40 * x;
        s = 10 * (x * 1.5);
        hf2 = h - 50;
        a = (hf2 * x) * 2;
        sueldo = z + s + a;
        cout << "Su sueldo es de: $" << sueldo << endl;
    }
    else if (h > 40)
    {
        hf = h - 40;
        z = 40 * x;
        s = hf * (x * 1.5);
        sueldo = z + s;
        cout << "Su sueldo es de: $" << sueldo << endl;
    }
    else
    {
        sueldo = x * h;
        cout << "Su sueldo es de: $" << sueldo << endl;
    }

    return 0;
}
