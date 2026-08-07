#include <iostream>
using namespace std;
int main(){
    char Choice;
    float Area;

    for(;;){
    cout << "Program Calcuate Area" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choose number : ";
    cin >> Choice;
    
    switch(Choice){
    case '1':
        float Redius;
        cout << "Enter Redius : ";
        cin >> Redius;
        Area = 3.14159F * Redius * Redius;
        cout << "Area of circle is: " << Area << endl;
        break;
    case '2':
        float Length, Width;
        cout << "Enter length and width : ";
        cin >> Length >> Width;
        Area = Length * Width;
        cout << "Area of Rectangle is: " << Area << endl;
        break;
    case '3':
        cout << "\n . . . Exit Progrem . . . \n";
        exit(0);
        break;
    
    default:    cout << "Your choose out of range is not process.n";
    }
}
return 0;
}