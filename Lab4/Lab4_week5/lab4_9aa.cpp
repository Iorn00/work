#include <iostream>
using namespace std;
#include <iomanip> 
int main(){
    int digit = 0;
    cout << right << setfill(' ') << "digit = ";
    while (digit <= 9){
        cout << setw(3) << digit << " ";
        digit++;
    }
    cout << ":"<<digit << endl; //จะได้digit = 0 1 2 3 4 5 6 7 8 9 :10
    digit = 20;
    cout << right << setfill(' ') << "digit = ";
    while(digit > 10){
        cout << setw(3) << digit << " ";
        digit --;
    }
    cout << ":"<<digit << endl;

    return 0; 
}