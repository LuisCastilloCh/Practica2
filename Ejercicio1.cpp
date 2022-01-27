#include <iostream>
using namespace std;

void fun_a(int *px, int *py);
void fun_b(int a[], int tam);

int main(){

    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fun_b(array, 10);

    cout<<array<<" es la dirección de memoria del array"<<endl;

    //como el arrray es tipo int cada elemento vale 4 bytes

    cout<<&array[3]<<" es la direccion de memoria y el contenido de array[3] es: "<<array[3]<<endl;

    /**El efecto de fun_b es alternar la posición de los números hasta dejar los elementos del array de la forma inversa**/

}

//intercambia posiciones

void fun_a(int *px, int *py){
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

void fun_b(int a[], int tam){
    int f, l;
    int *b = a;
    for (f = 0, l = tam -1; f < l; f++, l--) {
        fun_a(&b[f], &b[l]);
    }
}


