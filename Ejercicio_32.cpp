#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3, i, j, tem;
    cout << "Ingrese 3 numeros: " << endl; 
    cin >> x1;
    cin >> x2;
    cin >> x3;
    int arr[] = {x1,x2,x3};
    for ( i = 0; i < 2; i++){
        for ( j = 0; j < 2; j++){
            if(arr[j]<arr[j+1]){
                tem = arr[j];
                arr[j] = arr[j +1];
                arr[j+1] = tem;
            }
        }
        
    }
    cout << "Los numeros ordenados de mayor a menor son: " << endl;
    for (i= 0; i < 3; i++){
        cout << arr[i] << endl;
    }

    return 0;
}
