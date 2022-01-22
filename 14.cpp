#include <iostream>

using namespace std;

int main(){
    int numero;
    cout<<"digite el numero: ";cin>>numero;

    int primer_factorial=1, segundo_factorial=1;

    for(int i=1;i<=2*numero;i++){
        primer_factorial*=i;
    }
    for(int i=1;i<=numero;i++){
        segundo_factorial*=i;
    }

    cout<<"en una cuadricula "<<numero<<"X"<<numero<<" hay "<<(primer_factorial)/((segundo_factorial)*(segundo_factorial))<<" caminos.";

}
