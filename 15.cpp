#include <iostream>

using namespace std;

int suma_divisores_numero(int numero){
    int suma_div=0;

    for(int i=numero-1;i>0;i--){
        if(numero%i==0){
            suma_div+=i;
        }
    }

    return suma_div;
}
int main(){
    cout<<"ingresa tu numero: ";
    int numero_principal;
    cin>>numero_principal;

    int suma_principal=0;

    for(int au=numero_principal-1;au>0;au--){
        int aux_suma=suma_divisores_numero(au);

        for(int i=numero_principal-1;i>0;i--){
            int aux_suma_2=suma_divisores_numero(i);

            if(aux_suma==i and aux_suma_2==au and au!=i){
                suma_principal+=au;
                break;
            }
        }
    }
   cout<<"el resultado de la suma es: "<<suma_principal;
   return 0;
}
