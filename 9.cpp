#include <iostream>

using namespace std;

//true disponible; false no disponible

bool estado_silla(char arreglo_principal[],int asiento_clave){


   if(arreglo_principal[asiento_clave]=='-'){
       return true;
   }
   else{
       return false;
   }

}

int main(){

    char arreglo_principal[300]={};
    for(int au=0;au<300;au++){
        arreglo_principal[au]='-';
    }

    while(true){

     //imprimir cuadro

        for(int i=0;i<300;i++){
            if((i+1)%20==0){
                cout<<arreglo_principal[i];
                cout<<"|"<<endl;
            }

            else{
                cout<<arreglo_principal[i];
                cout<<"|";
            }
        }

        cout<<"para realizar o cancelar una reserva"<<endl;

        char letra_fi;
        cout<<"digite la letra correspondiente a la fila: ";
        cin>>letra_fi;

        int num_asiento;
        cout<<"digite el numero del asiento: ";
        cin>>num_asiento;

        string abecedario="abcdefjhijklmno";
        int asiento_clave=((abecedario.find(letra_fi))*20)+(num_asiento-1);

        bool estado_asiento=estado_silla(arreglo_principal,asiento_clave);

        if(estado_asiento==true){
            arreglo_principal[asiento_clave]='+';
        }
        else{
            arreglo_principal[asiento_clave]='-';
        }

    }

    return 0;
}
