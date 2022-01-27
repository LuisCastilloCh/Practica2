#include<iostream>

using namespace std;

void fun_c(double *a, int n, double *promedio, double *suma){
    int i;
    *suma = 0.0;
    for (i = 0; i < n; i++){
        *suma += *(a + i);
    }

    *promedio = *suma / n;
}

int main(){

    double v=0, j=0;

    double *prom=&v;
    double *sum=&j;

    double array[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    fun_c(array,15,prom,sum);

    cout<<*sum<<endl;
}
