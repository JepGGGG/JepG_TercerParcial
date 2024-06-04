#include <iostream>
using namespace std;
int main()
{
    int x, i, ma, me = 1, z = 0;
    for (i = 1; i <= 10; i++)
    {
        cout << "Ingrese un numero: " << i << endl;
        cin >> x;
        if (x > ma)
        {
            ma = x;
        }
        else if (x < me)
        {
            me = x;
        }
        z += x;
    }
    cout << "" << endl;
    cout << "La suma de los numeros es de: " << z << endl;
    cout << "El mayor es: " << ma << endl;
    cout << "El menor es: " << me << endl; 

    return 0;
}
