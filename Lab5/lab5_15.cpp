#include <iostream>
#include <iomanip>
using namespace std;
    void DisplayMenu();
    float Area(const float Radius);
    float Area(const float Length, const float Width);

int main(){
    char Choice;
    bool Flag = true;
    do{
        DisplayMenu();
        cin >> Choice;
        if(Choice == '1'){
            float Radius;
            cout << "Enter radius : "; cin >> Radius;
            cout << "Area of Cirle = " << fixed << setprecision(2) << Area(Radius) << endl;
        }
    else if(Choice == '2'){
        float Length, Width;
        cout << "Enter length and width : "; cin >> Length >> Width;
        cout << "Area of Rectangle = " << fixed << setprecision(2) << Area(Length, Width);
        cout << endl;
    }
    else if(Choice == '3') Flag = false;
        else{
        cout << " ... You choose out of range is not process ... \n";
        }
    }while(Flag);
    cout << " ... Exit Program ... \n";
    return (0);
}
float Area(const float Redius){
    return (3.14159f * Redius * Redius);
}
float Area(const float Length, const float Width){
    return (Length * Width);
}
void DisplayMenu(){
    cout << endl;
    cout << "*************************" << endl;
    cout << "Program Calculate Area" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choose number : ";
}