#include <iostream>
using namespace std;
bool isPalindrome(char Temp[]);

int main(){
    char Name[20]; //สร้างArray ชื่อ Name เก็บตัวอักษรได้สูงสุด 20 ช่อง 0 1 2...19
    cout << "Enter text : ";
    cin.getline(Name, 20); //รับข้อความจากผู้ใช้แล้วเก็บไว้ใน Name
    cout << "==============================" << endl;

    if (isPalindrome(Name)) //เอา nameเข้าฟังก์ชันisPalindrome()
        cout << "Your text is Palindrome." << endl;
    else
        cout << "Your text is not Palindrome." << endl;
    return 0;
}

bool isPalindrome(char Temp[]){ //ตรวจสอบ
    int i, j;       //i = ตำแหน่งด้านหน้า   j = ตำแหน่งด้านหลัง
    int length = 0;     //เอาไว้เก็บความยาวข้อึความ
    while (Temp[length] != '\0')    //\0 จุดสิ้นสุดของข้อความ    ยังไม่เจอ \0ก็วนต่อ
        length++;
    j = length - 1;

    for (i = 0; i < length / 2; i++){   //เปรียบเทียบหน้าหลัง
        cout << Temp[i] << " = " << Temp[j] << endl;    //แสดงตัวที่นำมาเปรียบเทียบ
        if (Temp[i] != Temp[j]) //เช็คตัวหน้าไม่เท่ากับตัวหลังมั้ย
            return false; //ไม่เหมือนกัน
        j--;
    }
    return true;    //เหมือนกัน
}   //เช็คว่าหน้า-หลังเหมือนกันมั้ย อย่าง x c d s d c x หน้าxหลังx ตรงกันหมดก็จะtrue
