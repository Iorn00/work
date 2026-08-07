#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "\nEnter a character : ";
    cin >> ch;
    cout << endl;
    if(ch >= 'a' && ch <= 'z') cout << ch << " is a lower character.";
    else if(ch >= 'A' && ch <= 'Z') cout << ch << " is an upper character.";
    else if(ch >= '0' && ch <= '9') cout << ch << " is numeric.";
    else cout << ch << " is a special character.";
    cout << endl;
    return 0;
}