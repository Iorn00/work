#include <iostream>
using namespace std;
int main(){
    char choice;
    cout << "Enter [R,W,B,G] : ";
    cin >> choice;

    switch (toupper(choice)){ //toupper บังคับตัวอักษรให้เป็นตัวใหญ่
        case 'R': cout << "RED"; break;
        case 'W': cout << "WHITE"; break;
        case 'B': cout << "BLUE"; break;
        case 'G': cout << "GREEN"; break;
        default: cout << "I don't know.";
    }
    return 0;
}