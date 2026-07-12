#include <iostream>
using namespace std;
// #include <string>
int main() {
    string number;

    cout << "Enter number : ";
    cin >> number;

    for (int i = 0; i < number.length(); i++) {
        cout << number[i] << "   ";
    }

    return 0; //อาจารย์เคยสอนอยู่ในlab2_2.cpp
}