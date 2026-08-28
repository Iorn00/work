#include <iostream>
using namespace std;
void CalCircle();
void swap(int&, int &);
int main(){
    cout << "Program Calculate of Circle." << endl;
    cout << "*****************************" << endl;
    CalCircle();

    int a = 1, b = 2;
    cout << "bf = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "af = " << a << ", b = " << b << endl;
    return 0;
}
void CalCircle(){
    float Radius, Area, Circumference;
    cout << "Input redius : ";
    cin >> Radius;

    Area = 3.14f * Radius * Radius;
    Circumference = 2 * 3.14f * Radius;

    cout << endl;
    cout << "Area of circle : " << Area << endl;
    cout << "Circuference of circle : " << Circumference << endl;
    cout << "Diameter of circle : " << (2 * Radius) << endl;
}
void swap(int &a, int &b){
    int temp;
    temp = a;   //temp = 1
    a = b;      //a = 2
    b = temp;   //b = 1
}