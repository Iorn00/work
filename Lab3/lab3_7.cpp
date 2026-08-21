#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter integer number : ";
    cin >> n;
    cout << endl;
    cout << "n = " << n << endl;
    cout << "n >> 1 = " << (n >> 1) << endl;
    //>> 1 = เลื่อนขวา → โดยทั่วไปเหมือน ÷ 2
    cout << "n << 1 = " << (n << 1) << endl;
    //<< 1 = เลื่อนซ้าย → โดยทั่วไปเหมือน × 2
    cout << "n & 8 = " << (n & 8) << endl;
    //& AND เทียบแต่ละบิต = 1 ทั้งคู่ถึงได้ 1
    cout << "n | 15 = " << (n | 15) << endl;
    // //| OR   เทียบแต่ละบิต
    // 1 | 1 = 1
    // 1 | 0 = 1
    // 0 | 1 = 1
    // 0 | 0 = 0   มี 1 อย่างน้อยหนึ่งตัว → ได้ 1
    cout << "n ^ 10 = " << (n ^ 10) << endl;
    //^ XOR เทียบแต่ละบิต เหมือนกัน = 0 , ต่างกัน = 1
    return (0);
}