#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << "Display square of number 1 to 10.\n";
    cout << "=================================\n";
    cout << "\tX\tX^2\n";
    cout << "-------------------------------\n";
    int X = 1;
    cout << setfill(' ');
    while(X <= 10){
        cout << "\t" << setw(3) << X << "\t" << setw(3) << X*X << endl;
        X++;
    }
    return 0;
}