#include <iostream>
#include<time.h>
#include<stdio.h>

using namespace std;

void Cuenta(char array[],int len,char n){

    int x=0;

    for(int i=0;i<=len;i++){
        if(n==array[i]){
            x++;
        }
    }

    cout<<n<<": "<<x<<endl;
}

void eliminar(char array[], int len, char n){
    for(int i=0;i<=len;i++){
        if(n==array[i]){
            array[i]=' ';
        }
    }
}

int main(){

    //Problema 1

    char array[200], letra, n;


    srand(time(NULL));

    for(int i=0;i<=200;i++){

        letra='A'+rand()%(('Z'-'A')+1);
        array[i]=letra;

    }

    int len=sizeof(array);

    for(int j=0;j<=len;j++){

        n=array[j];

        if(n!=' '){
            Cuenta(array,len,n);
            eliminar(array, len, n);
        }
    }

    return 0;

}
