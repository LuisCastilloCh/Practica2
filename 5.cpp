#include <iostream>
#include <string>

using namespace std;

void Cuenta(string array,int len,char n){

    string str;
    //int cont=0;

    for(int i=0;i<len-1;i++){
        if(n==array[i]){

            str+=n;
        }
    }

    cout<<str<<endl;
}

void eliminar(string array, int len, char n){
    for(int i=0;i<len-1;i++){
        if(n==array[i]){
            array[i]=' ';
        }
    }
}

int main(){

    //Problema 5

    string cad;
    char n;

    cout<<"Ingrese la cadena de caracteres: ";cin>>cad;

    int len=sizeof(cad);

    for(int i=0;i<len-1;i++){
        n=cad[i];
        if(n!=' '){
            Cuenta(cad, len, n);
            //eliminar(cad,len,n);
        }
    }

    return 0;

}
