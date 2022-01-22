#include <iostream>

using namespace std;

int main(){

    int permutacion;
    cout<<"ingrese el numero de tu permutacion: ";cin>>permutacion;

    int contador_permutacion=0;
    char elementos[10]={'0','1','2','3','4','5','6','7','8','9'};
    char elementos_2[10];

    for(int a=0;a<10;a++){
        for(int b=0;b<10;b++){
            for(int c=0;c<10;c++){
                for(int d=0;d<10;d++){
                    for(int e=0;e<10;e++){
                        for(int f=0;f<10;f++){
                            for(int g=0;g<10;g++){
                                for(int h=0;h<10;h++){
                                    for(int i=0;i<10;i++){
                                        for(int j=0;j<10;j++){

                                            //saber si la permutacion es valida-------------------

                                            elementos_2[0]=a;
                                            elementos_2[1]=b;
                                            elementos_2[2]=c;
                                            elementos_2[3]=d;
                                            elementos_2[4]=e;
                                            elementos_2[5]=f;
                                            elementos_2[6]=g;
                                            elementos_2[7]=h;
                                            elementos_2[8]=i;
                                            elementos_2[9]=j;

                                            bool ban=true;

                                            for(int x=0;x<10;x++){
                                                if(ban==false){
                                                    break;
                                                }
                                                for(int x1=0;x1<10;x1++){
                                                    if(x!=x1){
                                                        if(elementos_2[x]==elementos_2[x1]){
                                                            ban=false;
                                                            break;
                                                        }
                                                    }
                                                }
                                            }

                                            if(ban==true){

                                                contador_permutacion++;

                                                if(permutacion==contador_permutacion){
                                                    cout<<elementos[a]<<elementos[b]<<elementos[c]<<elementos[d]<<elementos[e]<<elementos[f]<<elementos[g];
                                                    cout<<elementos[h]<<elementos[i]<<elementos[j]<<endl;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}

