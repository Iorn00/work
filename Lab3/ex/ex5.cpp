#include <iostream>
using namespace std;

int main() {
    string bin;
    int decimal = 0;

    cout << "Enter binary number : ";
    cin >> bin;

    for (int i = 0; i < bin.length(); i++) {
        int digit = bin[i] - '0';      
        decimal = decimal * 2 + digit;
    }
    cout << "Decimal value of " << bin << " = " << decimal << endl;

    return 0;
}