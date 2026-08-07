#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void fn1(float, char);
void fn2(int, string);
void fn3(bool);

int main(){
    fn1(100, 'S'); //fn1 true
    fn1(100, 'W'); //fn1 false

    fn2(0, "A-123"); //fn2 true
    fn2(-2, "B-456"); //fn2 false

    fn3(true); //fn3 true
    fn3(false); //fn3 false

    return(0);
}

void fn1(float pay, char status){
    float tax;
    if(status == 'S') tax = 2.0 * pay; else tax = 0.14 * pay;
    cout << "pay " << tax << endl;
    tax = ((status == 'S')? 2.0 * pay : 0.14 * pay);
    cout << "pay ()" << tax << endl;
}
void fn2(int pastdue, string account_no){
    float credit;
    if (pastdue >= 0){
        cout << "Account number " << account_no << " is overdue\n";
        credit = 0;
    }else
    credit = 1000.0;
    cout << "credit " << credit << endl;
}
void fn3(bool circle){
    float area; 
    if(circle){
        float redius;
        cin >> redius;
        area = 3.14159 * redius * redius;
        cout << "Area of circle = " << area << endl;
    }else{
        float length, width;
        cin >> length >> width;
        area = length * width;
        cout << "Area of rectangle = " << area << endl;
    }
}