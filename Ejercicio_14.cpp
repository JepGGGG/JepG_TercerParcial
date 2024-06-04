#include <iostream>
using namespace std;

int main() {
    int m = 99, n;
    n = ++m;  
    
    cout << "m=" << m << ", n=" << n << "\n"; 

    cout << "m=" << m++ << "\n" << "m=" << ++m << "\n"; 

    return 0;
}
