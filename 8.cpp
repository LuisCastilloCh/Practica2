#include <iostream>
using namespace std;

int convertir(char letra){
    if(letra=='M'){
        return 1000;
    }
    if(letra=='D'){
        return 500;
    }
    if(letra=='C'){
        return 100;
    }
    if(letra=='L'){
        return 50;
    }
    if(letra=='X'){
        return 10;
    }
    if(letra=='V'){
        return 5;
    }
    if(letra=='I'){
        return 1;
    }

   return 0;
}

int saber_indice(string romano_num){
    int elementos=romano_num.size();
    if(romano_num[elementos-1]=='I' and romano_num[elementos-2]=='I' and romano_num[elementos-3]=='I' and romano_num[elementos-4]=='V' ){
        return elementos-5;
    }
    if(romano_num[elementos-1]=='I' and romano_num[elementos-2]=='I' and romano_num[elementos-3]=='V'){
        return elementos-4;
    }
    if(romano_num[elementos-1]=='I' and romano_num[elementos-2]=='I' and romano_num[elementos-3]=='I'){
        return elementos-4;
    }
     if(romano_num[elementos-1]=='I' and romano_num[elementos-2]=='I'){
         return elementos-3;
    }
     if(romano_num[elementos-1]=='I' and romano_num[elementos-2]=='V'){
         return elementos-3;
    }
     if(romano_num[elementos-1]=='V' and romano_num[elementos-2]=='I'){
         return elementos-3;
    }
     if(romano_num[elementos-1]=='X' and romano_num[elementos-2]=='I'){
         return elementos-3;
    }
    if(romano_num[elementos-1]=='I'){
        return elementos-2;
    }
    if(romano_num[elementos-1]=='V'){
        return elementos-2;
    }
    if(romano_num[elementos-1]=='X'){
        return elementos-2;
    }
    else{
        return elementos-1;
    }
}

int suma_unidades(string romano_num){
    int elementos=romano_num.size();
    if(romano_num[elementos-1]=='I' and romano_num[elementos-2]=='I' and romano_num[elementos-3]=='I' and romano_num[elementos-4]=='V' ){
        return 8;
    }
    if(romano_num[elementos-1]=='I' and romano_num[elementos-2]=='I' and romano_num[elementos-3]=='V'){
        return 7;
    }
    if(romano_num[elementos-1]=='I' and romano_num[elementos-2]=='I' and romano_num[elementos-3]=='I'){
        return 3;
    }
     if(romano_num[elementos-1]=='I' and romano_num[elementos-2]=='I'){
         return 2;
    }
     if(romano_num[elementos-1]=='I' and romano_num[elementos-2]=='V'){
         return 6;
    }
     if(romano_num[elementos-1]=='V' and romano_num[elementos-2]=='I'){
         return 4;
    }
     if(romano_num[elementos-1]=='X' and romano_num[elementos-2]=='I'){
         return 9;
    }
    if(romano_num[elementos-1]=='I'){
        return 1;
    }
    if(romano_num[elementos-1]=='V'){
        return 5;
    }
    if(romano_num[elementos-1]=='X'){
        return 10;
    }
    else{
        return 0;
    }
}

int suma_NO_unidades(int indice,string num_romano){

    int suma=0;

    for(int i=0;true;i++){
        if(i==indice){
            suma+=convertir(num_romano[i]);
            return suma;
            break;
        }

        if(convertir(num_romano[i])<convertir(num_romano[i+1])){
            suma-=convertir(num_romano[i]);
        }else{
            suma+=convertir(num_romano[i]);
        }
    }
}

int main(){
    string numero_romano;
    cout<<" ingresa tu numero en romano: ";cin>>numero_romano;


    int indice_comienzo=saber_indice(numero_romano);

    if(indice_comienzo<0){
        cout<<numero_romano<<" en numero arabico es: "<<suma_unidades(numero_romano)<<endl;
    }

    else{
        int num_arabe=suma_NO_unidades(indice_comienzo,numero_romano)+suma_unidades(numero_romano);
        cout<<numero_romano<<" en numero arabico es: "<<num_arabe<<endl;

    }

    return 0;

}
