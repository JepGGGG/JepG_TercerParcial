#include <iostream>
using namespace std;
int main(){
    int x, min, i;
    for (i = 0; i < 5; i++)
    {
        cout << "Ingrese el numero " << i <<":" << endl; 
        cin >> x;
        if(x < min){
            min = x;
        }
    }
    cout << "El numero menor es: " << min << endl;
    return 0;
}
