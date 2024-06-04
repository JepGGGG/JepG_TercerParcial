#include <iostream>
using namespace std;
int main()
{
    char y;
    cout << "Ingrese una letra: " << endl;
    cin >> y;
    if (y == 'a' || y == 'e' || y == 'i' || y == 'o' || y == 'u')
    {
        cout << "Es una vocal" << endl;
    }
    else
    {
        cout << "Es una consonante" << endl;
    }

    return 0;
}
