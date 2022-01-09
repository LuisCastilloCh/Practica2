#include <iostream>

using namespace std;

int main(){
    int numero;
    cout<<"digite el numero: ";
    cin>>numero;

    int primer_factorial=1;
    int segundo_factorial=1;

    for(int au=1;au<=2*numero;au++){
        primer_factorial*=au;
    }

    for(int i=1;i<=numero;i++){
        segundo_factorial*=i;
    }

    cout<<"en una cuadricula "<<numero<<"X"<<numero<<" hay "<<(primer_factorial)/((segundo_factorial)*(segundo_factorial))<<" caminos.";

}
