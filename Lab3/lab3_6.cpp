#include <iostream>
using namespace std;
int main(){
    int number;

    cout << "Enter number : ";
    cin >> number;
    cout << number << " is " << ((number % 2) == 0 ? "even" : "odd");
    cout << " number." << endl;
    
    return (0);
}