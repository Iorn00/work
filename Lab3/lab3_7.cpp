#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter integer number : ";
    cin >> n;
    cout << endl;
    cout << "n = " << n << endl;
    cout << "n >> 1 = " << (n >> 1) << endl;
    cout << "n << 1 = " << (n << 1) << endl;
    cout << "n & 8 = " << (n & 8) << endl;
    cout << "n | 15 = " << (n | 15) << endl;
    cout << "n ^ 10 = " << (n ^ 10) << endl;

    return (0);
}