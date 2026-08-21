#include <iostream>
#include <iomanip>
using namespace std;
int main(){ //แสดงเลข 1–10 พร้อมเลขยกกำลัง 2
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
    // X++ = เพิ่มทีละ 1
    // X*X = X²
    // setw(3) = จอง 3 ช่อง
    // while(X <= 10) = ทำจนถึง 10
    return 0;
}