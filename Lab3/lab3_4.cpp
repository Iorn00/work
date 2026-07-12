#include <iostream>
using namespace std;
int main(){
    int A,B;
    cout << "Enter first number (A) : ";
    cin >> A;
    cout << "Enter first number (B) : ";
    cin >> B;

    cout << "\nBefore A = " << A << endl;
    cout << "++A = " << ++A << endl;
    cout << "After A = " << A << endl;
    cout << "\nBefore A = " << A << endl;
    cout << "A++ = " << A++ << endl;
    cout << "After A = " << A << endl; 

    cout << "\nBefore B = " << B << endl;
    cout << "--B = " << --B << endl;     
    cout << "After B = " << B << endl;
    cout << "++B = " << ++B << endl;
    cout << "\nBefore B = " << B << endl;
    cout << "B-- = " << B-- << endl;     
    cout << "After B = " << B << endl;
    
    return (0);
}