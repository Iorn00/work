#include <iostream>
using namespace std;
int main(){
    int A,B;
    cout << "Enter first number(A) : "; cin >> A;
    cout << "Enter Secoud number(B) : "; cin >> B;
    cout << "\nTesting usage opertor\n";
    cout << "==================================\n"; 
    cout << "A < B = " << (A < B) << endl;
    cout << "A <= B = " << (A <= B) << endl;
    cout << "A > B = " << (A > B) << endl;
    cout << "A >= B = " << (A >= B) << endl;
    cout << "A == B = " << (A == B) << endl;
    cout << "A && B = " << (A && B) << endl;
    cout << "A || B = " << (A || B) << endl;
    cout << "!A = " << !A
         << ",!B " << !B << endl;
    return (0);
}