##include<iostream>
#define bol 70
using namespace std;
int main(){
    float p1,p2; 
    int e;
    cout << "Ingrese su edad: " << endl;
    cin >> e;
    p2 = bol-(bol*0.55);
    p1 = bol-(bol*0.6);
    if(e<5){
        cout << "El precio del boleto es de: $" << p1 << endl;
    }
    else if(e>60){
        cout << "El precio del boleto es de: $" << p2 << endl;
    }
    else{
        cout << "El precio del boleto es de: $70" << endl;
    }

    return 0;
}
