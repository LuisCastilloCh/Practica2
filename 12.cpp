#include <iostream>

using namespace std;

void espacio(int valor){
    if(valor<10){
        cout<<" "<<valor;
    }else{
        cout<<valor;
    }
}

void imprimir(int arreglo[]){
    cout<<" | ";espacio(arreglo[0]);cout<<" | ";espacio(arreglo[1]);cout<<" | ";espacio(arreglo[2]);cout<<" | ";espacio(arreglo[3]);cout<<" | ";espacio(arreglo[4]);cout<<" | "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<" | ";espacio(arreglo[5]);cout<<" | ";espacio(arreglo[6]);cout<<" | ";espacio(arreglo[7]);cout<<" | ";espacio(arreglo[8]);cout<<" | ";espacio(arreglo[9]);cout<<" | "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<" | ";espacio(arreglo[10]);cout<<" | ";espacio(arreglo[11]);cout<<" | ";espacio(arreglo[12]);cout<<" | ";espacio(arreglo[13]);cout<<" | ";espacio(arreglo[14]);cout<<" | "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<" | ";espacio(arreglo[15]);cout<<" | ";espacio(arreglo[16]);cout<<" | ";espacio(arreglo[17]);cout<<" | ";espacio(arreglo[18]);cout<<" | ";espacio(arreglo[19]);cout<<" | "<<endl;
    cout<<"---------------------------"<<endl;
    cout<<" | ";espacio(arreglo[20]);cout<<" | ";espacio(arreglo[21]);cout<<" | ";espacio(arreglo[22]);cout<<" | ";espacio(arreglo[23]);cout<<" | ";espacio(arreglo[24]);cout<<" | "<<endl;

    cout<<endl;
}
void girar_270(int arreglo[], int copia_arreglo[]){
    cout<<"despues de girar 270 grados: "<<endl;
    int posicion=20;
    for(int i=0;i<5;i++){
        arreglo[posicion]=copia_arreglo[i];
        posicion-=5;
    }

    posicion=21;
    for(int i=5;i<10;i++){
        arreglo[posicion]=copia_arreglo[i];
        posicion-=5;
    }

    posicion=22;
    for(int i=10;i<15;i++){
        arreglo[posicion]=copia_arreglo[i];
        posicion-=5;
    }
    posicion=23;
    for(int i=15;i<20;i++){
        arreglo[posicion]=copia_arreglo[i];
        posicion-=5;
    }
    posicion=24;
    for(int i=20;i<25;i++){
        arreglo[posicion]=copia_arreglo[i];
        posicion-=5;
    }

    imprimir(arreglo);

}

void girar_90(int arreglo[], int copia_arreglo[]){
    cout<<"despues de girar 90 grados: "<<endl;
    int posicion=4;
    for(int i=0;i<5;i++){
        arreglo[posicion]=copia_arreglo[i];
        posicion+=5;
    }

    posicion=3;
    for(int i=5;i<10;i++){
        arreglo[posicion]=copia_arreglo[i];
        posicion+=5;
    }

    posicion=2;
    for(int i=10;i<15;i++){
        arreglo[posicion]=copia_arreglo[i];
        posicion+=5;
    }
    posicion=1;
    for(int i=15;i<20;i++){
        arreglo[posicion]=copia_arreglo[i];
        posicion+=5;
    }
    posicion=0;
    for(int i=20;i<25;i++){
        arreglo[posicion]=copia_arreglo[i];
        posicion+=5;
    }

    imprimir(arreglo);

}

void girar_180(int arreglo[], int copia_arreglo[]){

    cout<<"despues de girar 180 grados: "<<endl;
    int posicion=24;
    for(int au=0;au<25;au++){
        arreglo[posicion]=copia_arreglo[au];
        posicion-=1;
    }
    imprimir(arreglo);
}

int main(){

    //generar arreglo y copia-----------------------------------

    int arreglo_principal[25]={};
    int copia_arreglo_principal[25]={};
    for(int au=0;au<25;au++){
        arreglo_principal[au]=au+1;
        copia_arreglo_principal[au]=au+1;
    }

    cout<<"original: "<<endl;
    imprimir(arreglo_principal);

    girar_90(arreglo_principal,copia_arreglo_principal);
    girar_180(arreglo_principal,copia_arreglo_principal);
    girar_270(arreglo_principal,copia_arreglo_principal);

    return 0;
}
