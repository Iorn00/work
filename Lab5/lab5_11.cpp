#include <iostream>
using namespace std;
int x = 5; // global
int y = 5; // global
int sum(){
    y = +5;
    int x = x+5; //local
    cout << "sum : address of x:" << &x << endl;
    cout << "sum : address of y:" << &y << endl;
    return x+5;
}
void Example(const int a, int b, int c){
    b = a+3;
    //a = c+5;
}
int main(){
    cout << "address of x :" << &x << endl;
    cout << "address of y :" << &y << endl;
    cout << "x = " << x << endl;
    cout << sum();
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
return 0;
}