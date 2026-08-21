#include <iostream>
using namespace std;
int main(){ //หาผลรวมของกำลังสอง ตั้งแต่ 1 ถึง n
    unsigned long Sum = 0L; //ตัวเก็บผลรวม เริ่มที่ 0
    int n, i = 1;
    //int nจำนวนที่ผู้ใช้ต้องการไปถึง,i = 1 เริ่มนับจาก 1
    cout << "Please enter value n of find summation of n*n : ";
    cin >> n;

    do{
        Sum += i*i; //เอา i² ไปบวกกับ Sum
        cout << i << " Sum = " << Sum << endl;
        i++; //เพิ่ม i ทีละ 1
    }while(i<=n); //ทำต่อถ้า i ยังไม่เกิน n
    cout << "Sum = " << Sum << endl;
    return 0;
}