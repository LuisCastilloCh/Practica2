#include <iostream>
using namespace std;

bool compara(string cad1, string cad2){

    bool longitud=false, ban=true;
    int len1=sizeof(cad1), len2=sizeof(cad2);

    if(len1==len2){
        longitud=true;
    }

    for(int i=0;i<=len1 & i<=len2;i++){

        if(cad1[i]!=cad2[i]){
            ban=false;
            break;
        }

    }

    if(ban & longitud){
        cout<<"son iguales";
        return true;
    }else{
        cout<<"no son iguales";
        return false;
    }

}

int main(){

    //Problema 2

    string cadena1, cadena2;

    cout<<"Escribe la cadena 1: ";cin>>cadena1;
    cout<<"Escribe la cadena 2: ";cin>>cadena2;

    compara(cadena1, cadena2);

    return 0;

}
