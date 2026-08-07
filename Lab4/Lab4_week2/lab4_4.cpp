#include <iostream>
using namespace std;
int main(){
    int LeftOperator, RightOperand;
    char Operator;
    int Result;

    cout << "Please enter a simple expression\n";
    cout << "(number operator number) : ";
    cin >> LeftOperator >> Operator >> RightOperand;

    switch (Operator){
        case '+' : Result = LeftOperator + RightOperand; break;
        case '-' : Result = LeftOperator - RightOperand; break;
        case '*' : Result = LeftOperator * RightOperand; break;
        case '/' : Result = LeftOperator / RightOperand; break;

        default : cout << Operator << " is unrecognized operation." << endl;
        return 1;
    }
    cout << LeftOperator << " " << Operator << " " << RightOperand
         << " equals " << Result << endl;
         return 0;
}