
#include <iostream>
using namespace std;
int main(){
    int n = 5, t;
    cout << "El valor de t es: " << t << endl; 
    t = ++n * --n;
    cout << "n=" << n << ", t=" << t << endl;
    cout << ++n << ++n << ++n << endl;

    return 0;
}
