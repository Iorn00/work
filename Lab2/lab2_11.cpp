#include <iostream>
using namespace std;
int main(){
    int Number1, Number2, Result;
    cout <<"Program addition 2 values." <<endl;

    //input two number
    cout << "Enter First number : "; cin >> Number1;
    cout << "Enter second number : "; cin >> Number2;
    cout << endl;
    
    //process addition teo value
    Result = Number1 + Number2;
    //Display addition of two values
    cout << "Sum" <<Number1<< "+" <<Number2;
    cout << "result" << Result << endl;
    return 0;

}
