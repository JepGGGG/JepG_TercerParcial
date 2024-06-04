#include <iostream>
#define PI 3.141592
using namespace std;
int main(void)
{
    float radio, perimetro;
    cout << "Introduzca el radio: " << endl;
    cin >> radio;
    perimetro = 2*PI*radio;
    cout << perimetro << endl;

    return 0;
}
