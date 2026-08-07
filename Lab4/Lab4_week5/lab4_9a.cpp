#include <iostream>
using namespace std;
int main(){
    int digit = 0;
    cout << "digit = ";
    while (digit <= 9){
        cout << digit << " ";
        digit++;

    }
    // cout << endl;  จะได้digit = 0 1 2 3 4 5 6 7 8 9 
    cout << ":"<<digit << endl; //จะได้digit = 0 1 2 3 4 5 6 7 8 9 :10

    return 0; 
}