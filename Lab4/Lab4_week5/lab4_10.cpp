#include <iostream>
using namespace std;
int main(){
    int ListSize = 5;
    int ValueProcessed = 0;
    float ValueSum = 0;

    cout << "Please enter " << ListSize << " numbers" << endl;
    while(ValueProcessed < ListSize){
        float Value;
        cin >> Value;
        ValueSum += Value;
        ++ValueProcessed;
    }
    float Average = ValueSum/ValueProcessed;
    cout << "Average : " << Average << endl;
    return 0;
}