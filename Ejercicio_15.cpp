
#include <iostream>

using namespace std;

int main() {
    int n = 5, t; 

    t = ++n * --n; 
    cout << "n=" << n << ", t=" << t << "\n"; 

    n += 3; 
    cout << n << " " << n << " " << n << "\n"; 

    return 0;
}
