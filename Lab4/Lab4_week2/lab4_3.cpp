#include <iostream>
using namespace std;
int main(){ //ตรวจสอบว่าอักขระที่ป้อนเข้ามาเป็นอะไร    
    char ch; //char = เก็บตัวอักษร 1 ตัว
    cout << "\nEnter a character : ";
    cin >> ch;
    cout << endl;
    if(ch >= 'a' && ch <= 'z') cout << ch << " is a lower character.";
    else if(ch >= 'A' && ch <= 'Z') cout << ch << " is an upper character.";
    else if(ch >= '0' && ch <= '9') cout << ch << " is numeric.";
    else cout << ch << " is a special character."; 
    //ถ้าไม่ใช่ทั้งหมด ก็ถือว่าเป็น อักขระพิเศษ @  → special character อื่น ๆ → อักขระพิเศษ
    cout << endl;
    return 0;
}