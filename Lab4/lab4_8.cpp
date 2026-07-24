#include <iostream>
using namespace std;
int main(){
    int Num, Sum=0, Value;
    cout << "Enter number : ";
    cin >> Num;
    for(int n=1; n<=Num; n++){
        cout << "Enter integer value(" << n << ") : ";
        cin >> Value;
        Sum = Sum + Value;
    }
    cout << "\nSummation of Integer";
    cout << "value = " << Sum << endl;
    return 0;
}