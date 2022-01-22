#include <iostream>
#include <string>

using namespace std;

void num(string str){

    string num="";

    for(int i=0;i<str.size();i++){
        if(isdigit(str[i])){
                num+=str[i];
        }
    }
    cout<<num;
}

void txt(string str){

    string txt="";

    for(int i=0;i<str.size();i++){
        if(isdigit(str[i])==false){
                txt+=str[i];
        }
    }
    cout<<txt;
}

int main(){

    string cadena;
    cout<<"escribe los caracteres: ";cin>>cadena;

    cout<<"original: "<<cadena<<endl;
    cout<<"Texto: ";
    txt(cadena);
    cout<<" Numero: ";
    num(cadena);

    return 0;
}



