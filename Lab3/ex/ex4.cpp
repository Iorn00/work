#include <iostream>
using namespace std;
int main() {
    int number;

    cout << "Enter number : ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "ต้อง4หลักนะเตง";
        //โจทย์บอกให้รับค่าตัวเลขจำนวนเต็ม 1 ค่า จำนวน 4 หลักเสมอ เลยใส่กันคนกรอกไม่ครบ4หลัก
        return 0;
    }

    cout << number / 1000 << "   ";
    cout << (number / 100) % 10 << "   ";
    cout << (number / 10) % 10 << "   ";
    cout << number % 10;

    return 0;
}