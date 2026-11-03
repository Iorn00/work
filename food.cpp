
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdio>
using namespace std;

// Function Declaration
int Menu();
void AddFood(string FN);
void DisplayFood(string FN);
void EditFood(string FN);
void DeleteFood(string FN);
void OrderFood(string FN);

int main(){

    string Filename = "food.dat";
    int c;

    do{
        c = Menu();

        switch(c){
            case 1: AddFood(Filename); break;
            case 2: DisplayFood(Filename); break;
            case 3: EditFood(Filename); break;
            case 4: DeleteFood(Filename); break;
            case 5: OrderFood(Filename); break;
            case 0: break;

            default:
                cout << "Error try again" << endl;
        }

    }while(c != 0);

    cout << "Exit Program." << endl;

    return 0;
}

// Main Menu
int Menu(){

    int Choose;

    cout << "\n=================================\n";
    cout << "       RESTAURANT POS SYSTEM\n";
    cout << "=================================\n";
    cout << ": 1 - Add Food\n";
    cout << ": 2 - Display Food\n";
    cout << ": 3 - Edit Food\n";
    cout << ": 4 - Delete Food\n";
    cout << ": 5 - Order Food\n";
    cout << ": 0 - Exit\n";
    cout << "=================================\n";
    cout << "Enter choose : ";

    cin >> Choose;

    return Choose;
}
