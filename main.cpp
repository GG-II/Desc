#include <iostream>

using namespace std;

float desc25 (float total);

float desc10 (float total);

int main() {
    float precio, total, desc; int j, i;
    cout<<"Ingrese la cantidad de productos a escanear: "<<endl;
    cin>>j;
    cout<<"Ingrese sus productos"<<endl;
    for(i=1; i<=j; i++){
        cin>>precio;
        total+=precio;
    }
    if (total<10000){
        cout<<"El precio con descuento es: "<<desc10(total);
    }
    else if (total>=10000){
        cout<<"El precio con descuento es: "<<desc25(total);
    }
}

float desc25 (float total){
    float desc;
    desc=total*0.75;
    return desc;
}

float desc10 (float total){
    float desc;
    desc=total*0.90;
    return desc;
}
