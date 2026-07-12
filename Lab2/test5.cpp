#include <iostream>
using namespace std;
int main(){
    int Length, Width;
    int Area, Perimeter;
    cout << "Program Calculate Rectangle." <<endl;
    cout << "Enter Length : "; cin >> Length;
    cout << "Enter Width : "; cin >> Width;
    Area = Length * Width;
    Perimeter = 2*(Length + Width);

    cout << "Area of Rectangle" <<" = "<< Area << endl;
    cout << "Perimeter of Rectangle" <<" = " << Perimeter << endl;

    return 0;
}