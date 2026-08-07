#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int digit = 0;
    cout << setfill(' ') << "Digit : ";
    do{
        cout <<setw(2) << digit << " ";
        digit++;
    }while(digit <= 9);
    cout << endl;

    digit = 10;
    cout << "Digit : ";
    do{
        cout << setw(2) << digit << " ";
        digit--;
    }while(digit >= 1);
    cout << endl;
}