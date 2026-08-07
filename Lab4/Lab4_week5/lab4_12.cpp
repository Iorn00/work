#include <iostream>
using namespace std;
int main(){
    int Num =1, Value, Sum = 0;
    bool Flag = true;
    do{
        cout << "Enter value " << Num << " : ";
        cin >> Value;
        if(Value > 0 ){
            Sum += Value;
            cout << Sum << endl;
            Num++;
        }
        else Flag = false;
        }while(Flag);
        if(Num > 1){
            float Avg;
            Avg = static_cast<float>(Sum)/--Num;
            cout << "Average of data = " << Avg << endl;
        }
        else cout << "No data input." << endl;
    return 0;
}