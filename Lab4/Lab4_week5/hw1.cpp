#include <iostream>
using namespace std;
string cal_grade(int score); //รับค่า score เป็น int > ส่งค่ากลับเป็น string 
//เช่น cal_grade(90) > จะส่ง 90 เข้าไปคำนวณ แล้วคืนค่า "A"
int main(){
    int choice;
    int score;
    do{
//do-while(true) do{...}while(true); คือ ทำคำสั่งด้านในก่อน แล้ววนซ้ำตลอดเวลาเพราะเงื่อนไขคือwhile(true)
//ซึ่ง true เป็นจริงตลอดดังนั้นโปรแกรมจะไม่หยุดเอง จนกว่าจะเจอbreak;
        cout << "Cal Grade Demo 1\n";
        cout << " 1 : test function \n 2 : input score\n 3 : Exit Program" << endl;
        cout << "Please Enter Your choice [1,2,3] : ";
        cin >> choice;
        if(choice == 1){
            for(int i =-2; i <= 102; i++){
//for กำหนดว่าi เริ่มที่ -2 ทำงานจนกว่า i > 102 เพิ่ม i ทีละ 1 คือ -2 -1 0 1 2 3...100 101 102
                if(i > 0 && i < 100){ //1 ถึง 99
                if(i%5 == 0) cout << endl; //% คือ หารเอาเศษ i % 5 == 0 คือ i หาร 5 ลงตัว หารลงตัว โปรแกรมจะแสดงคะแนนและเกรด
                cout << "Score " << i << " = " << cal_grade(i) << "\t"; 
                }else{
                    cout << "Error Score " << i << " out of range\n";
                }
            }
        }
        if(choice == 2){
            cout << "Enter score : ";
            cin >> score;
            cout << "Score " << score << " = " << cal_grade(score) << endl;
        }
        
        if(choice == 3){
            cout << "End Program";
            break;
        }
        else
            cout << "Try Again\n";
            cout << "=================================================" << endl;


    }while(true);
    return 0;
}
string cal_grade(int score){
    string grade = "F"; //กำหนดให้เกรดเป็น F ก่อน ค่อยตรวจถ้าคะแนน 90 ขึ้นไป = A
    //ถ้าไม่เข้าเงื่อนไขทั้งสองอัน ก็ยังเป็น F
    if(score >= 90) grade = "A";
    else if(score >= 80) grade = "B"; //ถ้าไม่ถึง 90 จะมาตรวจที่บรรทัดนี้
    else if(score >= 70) grade = "C";
    else if(score >= 60) grade = "D";
    return grade;
}