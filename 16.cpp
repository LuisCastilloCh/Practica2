#include <iostream>

using namespace std;

int main()
{
    cout<<"ingrese el numero de tu permutacion: ";
    int permutacion;
    cin>>permutacion;
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

                                            for(int au=0;au<10;au++){
                                                if(ban==false){
                                                    break;
                                                }
                                                for(int au_1=0;au_1<10;au_1++){
                                                    if(au!=au_1){
                                                        if(elementos_2[au]==elementos_2[au_1]){
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
