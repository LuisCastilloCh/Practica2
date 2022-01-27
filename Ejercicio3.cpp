#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    unsigned short b[4][2] = {{77, 50}, {5, 2}, {28, 39}, {99, 3}};

    cout<<"El valor correspondiente a: "<<"b[0][0]"<<" es: "<<&(b[0][0])<<endl;
    cout<<"El valor correspondiente a: "<<"b[0][1]"<<" es: "<<&(b[0][1])<<endl;
    cout<<"El valor correspondiente a: "<<"b[1][0]"<<" es: "<<&(b[1][0])<<endl;
    cout<<"El valor correspondiente a: "<<"b[1][1]"<<" es: "<<&(b[1][1])<<endl;
    cout<<"El valor correspondiente a: "<<"b[2][0]"<<" es: "<<&(b[2][0])<<endl;
    cout<<"El valor correspondiente a: "<<"b[2][1]"<<" es: "<<&(b[2][1])<<endl;
    cout<<"El valor correspondiente a: "<<"b[3][0]"<<" es: "<<&(b[3][0])<<endl;
    cout<<"El valor correspondiente a: "<<"b[3][1]"<<" es: "<<&(b[3][1])<<endl;

    cout<<""<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<""<<endl;

    cout<<"El valor correspondiente a: "<<"b"<<" es: "<<b<<endl;
    cout<<"El valor correspondiente a: "<<"b+2"<<" es: "<<b+2<<endl;
    cout<<"El valor correspondiente a: "<<"*(b+2)"<<" es: "<<*(b+2)<<endl;
    cout<<"El valor correspondiente a: "<<"*(b+2)+1"<<" es: "<<*(b+2)+1<<endl;
    cout<<"El valor correspondiente a: "<<"*(*(b+2)+1)"<<" es: "<<*(*(b+2)+1)<<endl;
    cout<<"El valor correspondiente a: "<<"b[3][1]"<<" es: "<<b[3][1]<<endl;
    //cout<<"El valor correspondiente a: "<<"*b++"<<" es: "<<*b++<<endl;

    cout<<"El valor correspondiente a: "<<"b[3][1]"<<" es: "<<&(b[3][1])<<endl;
    return 0;

}
