#include <iostream>
using namespace std ;
int main(){
    // char a;
    //128 64 32 16 8 4 2 1
    // for (int i = -255; i<1; i ++);
    //     cout<< i << ":" << a++ << endl;

    // short a =32766;
    // for (int i = 32766; i <32800; i++){
    //     cout <<i << ":" << (a++) <<endl;
    // }
        // double f,c;
        // cout << "Enter F : ";
        // cin >> f;
        // c = 5.0/9 * (f-32);
        // cout << 5.0/9 << endl;
        // cout << "f = " << f << endl;
        // cout << "c = " << c << endl;
        // f= ((9.0/5) * c) + 32;
        // cout << "c = " << c << endl;
        // cout << "f = " << f << endl;

        double f,c;

        cout << "Enter F : ";
        cin >> f;
        c = 5.0/9 * (f-32);
        cout << 5.0/9 << endl;

        f= ((9.0/5) * c) + 32;
        cout << "F convert to C = " << c << endl;
        cout << "C convert to F = " << f << endl;
    return(0);
}