#include<iostream>
#include<cstdlib>
using namespace std;

int suma_clave(int arreglo[], int tamano){

   int suma_total=0;

   for(int au=0;au<tamano;au++){
       suma_total+=arreglo[au];
   }

   return suma_total;
}

bool verificar_diagonales(int arreglo[],int tamano,int suma_clave){
    //digonal 1.
    int suma_diagonal_1=0;
    for(int au=0;au<=(tamano*tamano)-1;au+=tamano+1){
        suma_diagonal_1+=arreglo[au];
    }

    int suma_diagonal_2=0;
    for(int au=tamano-1;au<=((tamano*tamano)-1)-(tamano-1);au+=(tamano-1)){
        suma_diagonal_2+=arreglo[au];
    }

    if(suma_diagonal_2==suma_diagonal_1 and suma_diagonal_1==suma_clave){
        return true;
    }
    else{
        return false;
    }

}

bool verificar_columnas(int arreglo[],int tamano,int suma_clave){
    int suma_auxiliar=0;
    for(int au=0;au<tamano;au++){
        int i=au;

        for(i;i<(tamano*tamano);i+=tamano){

            suma_auxiliar+=arreglo[i];

        }

        if(suma_auxiliar!=suma_clave){
            return false;
        }

        else{
            suma_auxiliar=0;
        }
    }
    return true;
}

bool verificar_filas(int arreglo[],int tamano,int suma_clave){
    int suma_auxiliar=0;
    for(int i=0;i<(tamano*tamano);i++){
        if((i+1)%(tamano)!=0){
            suma_auxiliar+=arreglo[i];
        }

        else{
            suma_auxiliar+=arreglo[i];

            if(suma_auxiliar!=suma_clave){
                return false;
               break;
            }

         else{
             suma_auxiliar=0;
            }
        }
    }
    return true;

}

int main(){
    cout<<"ingresa el numero de columnas y filas de tu matriz: ";
    int tamano;
    cin>>tamano;

    int arreglo_principal[(tamano*tamano)];
    int posicion=0;
    for(int au=1;au<=tamano;au++){
        for(int i=1;i<=tamano;i++){
            cout<<"ingrese el elemento, en la fila: "<<au<<" y columna: "<<i<<endl;
            int auxiliar;
            cin>>auxiliar;
            arreglo_principal[posicion]=auxiliar;
            posicion++;
        }
    }

   int clave_suma=suma_clave(arreglo_principal,tamano);

   bool ban_filas=verificar_filas(arreglo_principal,tamano,clave_suma);
   bool ban_columnas=verificar_columnas(arreglo_principal,tamano,clave_suma);
   bool ban_diagonales=verificar_diagonales(arreglo_principal,tamano,clave_suma);


   if(ban_filas==true and ban_columnas==true and ban_diagonales==true){
       cout<<"tu cuadrado es magico.";
   }
   else{

              cout<<"tu cuadrado NO es magico.";

   }

   cout<<endl;

   for(int i=0;i<tamano*tamano;i++){

       cout<<"|";
       cout<<arreglo_principal[i];
       cout<<"|";

       if((i+1)%tamano==0){
           cout<<endl;
       }
   }

   return 0;
}
