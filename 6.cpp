#include<iostream>
using namespace std;

void c_numeros(string c_original){

    string  cadena_num="";
    int posicion=0;

    for(int au=0;au<=sizeof (c_original);au++){
        if(isdigit(c_original[au])){
                cadena_num+=c_original[au];
        }

    }

    cout<<cadena_num;
}

void c_letras(string c_original){

    string  cadena_num="";
    int posicion=0;

    for(int au=0;au<=sizeof (c_original);au++){
        if(isalpha(c_original[au])){
                cadena_num+=c_original[au];
        }
    }

    cout<<cadena_num;
}

int main(){

    cout<<"escribe los caracteres: ";
    string cadena;
    cin>>cadena;

    cout<<"original: "<<cadena<<endl;
    cout<<"Texto: ";
    c_letras(cadena);
    cout<<" Numero: ";
    c_numeros(cadena);

    return 0;

}
