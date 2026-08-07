#include <iostream>
using namespace std;
int main (){
    string firstname;
    string* address = &firstname;

    cout << "please enter your name : ";
    cin >> firstname;
    cout << "Hello, " << firstname << "\n";
    
    cout << "Stored at address : " << &firstname << "\n";
    cout << "Value frottmem addres : " << *address << "\n";
    return (0);
}