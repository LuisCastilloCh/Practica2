#include<iostream>
#include<stdlib.h>
using namespace std;

//saber el numero a dividir.

string div_numero(string numero, int n){

    if(numero.size()%n==0){
        return numero;
    }else{

        string ceros="";
        string copia_numero=numero;

        for(;copia_numero.size()%n!=0;){
            ceros+="0";
            copia_numero=ceros+numero;
        }

    return copia_numero;

    }

}

int suma(string numero,int n){


    int suma_total=0;
    string auxiliar_numero="";

    for(int au=0;au<numero.size();au++){
        auxiliar_numero+=numero[au];

        if((au+1)%n==0){
            suma_total+=atoi(auxiliar_numero.c_str());
            auxiliar_numero="";

        }

    }

    return suma_total;

}

int main(){

    string cadena;
    cin>>cadena;
    int n;
    cin>>n;

    string numero_real;
    numero_real=div_numero(cadena,n);
    cout<<suma(numero_real,n);

    return 0;

}
