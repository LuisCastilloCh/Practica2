#include <iostream>

using namespace std;

void imprimir(int arreglo[]){
    cout<<" | "<<arreglo[0]<<" | "<<arreglo[1]<<"  | "<<arreglo[2]<<"  | "<<arreglo[3]<<"  | "<<arreglo[4]<<"  | "<<endl;
    cout<<" | "<<arreglo[5]<<" | "<<arreglo[6]<<"  | "<<arreglo[7]<<"  | "<<arreglo[8]<<"  | "<<arreglo[9]<<"  | "<<endl;
    cout<<" | "<<arreglo[10]<<" | "<<arreglo[11]<<" | "<<arreglo[12]<<" | "<<arreglo[13]<<" | "<<arreglo[14]<<" | "<<endl;
    cout<<" | "<<arreglo[15]<<" | "<<arreglo[16]<<" | "<<arreglo[17]<<" | "<<arreglo[18]<<" | "<<arreglo[19]<<" | "<<endl;
    cout<<" | "<<arreglo[20]<<" | "<<arreglo[21]<<" | "<<arreglo[22]<<" | "<<arreglo[23]<<" | "<<arreglo[24]<<" | "<<endl;

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
