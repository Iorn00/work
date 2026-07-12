#include <iostream>
// #include <string>
using namespace std;
int main(){
    string Name;
    int Age;
    /*input*/ 
    cout << "Enter name: ";
    cin >> Name;
    cout << "Enter age: ";
    cin >> Age;
    /*output*/
    cout << "\nHello," << Name <<"." << endl;
    cout << "You have " << Age << "years old." << endl;
    cout << "You are beginner programmer." << endl;
    return 0;
}