#include <iostream>

using namespace std;


int main(){

    int arrayA[4], nA, arrayB[4], nB;

    cout<<"Las coordenadas del triangulo deben ser 4 numeros, los dos primeros (x, y) de la esquina superior derecha, y los dos ultimos deben ser de ancho y altura respectivamente"<<endl;

    cout<<endl;
    cout<<"Ingrese los valores para el rectangulo A"<<endl;

    for(int i=0;i<4;i++){
        cout<<"Ingrese un valor: ";cin>>nA;
        arrayA[i]=nA;
    }

    cout<<endl;
    cout<<"Ingrese los valores para el rectangulo B"<<endl;

    for(int i=0;i<4;i++){
        cout<<"Ingrese un valor: ";cin>>nB;
        arrayB[i]=nB;
    }

    int xA=arrayA[0];
    int yA=arrayA[1];
    int anchoA=arrayA[2];
    int alturaA=arrayA[3];

    int xB=arrayB[0];
    int yB=arrayB[1];
    int anchoB=arrayB[2];
    int alturaB=arrayB[3];





    cout<<yB;

    return 0;
}
