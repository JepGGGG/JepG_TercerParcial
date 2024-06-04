#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "Introduzca una letra una letra: " << endl;
    cin >> x;
    switch (x)
    {
    case 'a':
        cout << "Es una vocal" << endl;
        break;
    case 'e':
        cout << "Es una vocal" << endl;
        break;
    case 'i':
        cout << "Es una vocal" << endl;
        break;
    case 'o':
        cout << "Es una vocal" << endl;
        break;
    case 'u':
        cout << "Es una vocal" << endl;
        break;
    default:
        cout << "Es una consonane" << endl;
        break;
    }

    return 0;
}
