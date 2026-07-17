#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c;
    cout << "Enter the lengths of the two sides adjacent to the right angle\n";
    cout << "(a b) : ";
    cin >> a >> b;
    c = sqrt(pow(a,2.0)+pow(b,2.0));
    cout << "Hypotenus = " << c << "\n";
    cout << "============================================\n";
    return (0);
}