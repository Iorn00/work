#include <iostream>
#include <cctype>

using namespace std;

bool isPalindrome(char Temp[], int start, int end);

int main() {

    char Name[20]; // สร้าง Array ชื่อ Name เก็บตัวอักษรได้สูงสุด 19 ตัว + \0

    cout << "Enter text : ";
    cin.getline(Name, 20); // รับข้อความจากผู้ใช้

    cout << "==============================" << endl;

    int length = 0;

    while (Name[length] != '\0')
        length++;

    // ตรวจสอบทั้งคำ
    if (!isPalindrome(Name, 0, length - 1)) {
        cout << "No" << endl;
    }
    else {

        int half = length / 2;
        bool first, second;

        // ตรวจครึ่งแรก
        first = isPalindrome(Name, 0, half - 1);

        // ตรวจครึ่งหลัง
        if (length % 2 == 0)
            second = isPalindrome(Name, half, length - 1);
        else
            second = isPalindrome(Name, half + 1, length - 1);

        if (first && second)
            cout << "Double Palindrome" << endl;
        else
            cout << "Palindrome" << endl;
    }

    return 0;
}


// ฟังก์ชันตรวจสอบ Palindrome
bool isPalindrome(char Temp[], int start, int end) {

    while (start < end) {

        char a = tolower(Temp[start]);
        char b = tolower(Temp[end]);

        if (a != b)
            return false;

        start++;
        end--;
    }

    return true;
}