#include <iostream>
using namespace std;
int main(){ //รับจำนวนตัวเลขที่ต้องการป้อน แล้วนำตัวเลขทั้งหมดมาบวกกัน
    int Num, Sum=0, Value;
    // Num = จะป้อนตัวเลข กี่ตัว
    // Value = ตัวเลขที่ป้อนแต่ละครั้ง
    // Sum=0 = เก็บผลรวม เริ่มจาก 0
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