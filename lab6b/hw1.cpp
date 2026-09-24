#include <iostream>
#include <iomanip>
#include <time.h> //ทำให้การสุ่มเปลี่ยนไป
using namespace std;
void RandomVote(int vote[][1], int student, int candidate); //สุ่มการเลือกตั้ง
void Calculate(int vote[][1], int student, int score[]);    //นับคะแนน
void Display(int score[], int candidate, int total);        //แสดงผล

int main(){
    int candidate;  //เอาไว้เก็บจำนวนผู้สมัคร
    int student = 500; //นศ.มีสิทธิ์เลือกตั้ง 500
    cout << "Enter number student chairman : ";
    cin >> candidate;

    int vote[500][1];
    int score[20] = {0};

    srand((unsigned int)time(0));   //สุ่มไม่เหมือนเดิม
    RandomVote(vote, student, candidate);
    Calculate(vote, student, score);
    int total = 0;
    for(int i = 0; i < candidate; i++){    //จำนวนคนที่โหวตทั้งหมด
        total += score[i];  //เอาคะแนนทุกคนมาบวก=คนที่ใช้สิทธิ์
    }                   //แล้วเอามาลบกับ500 = คนที่ไม่ได้ใช้สิทธิ์
    Display(score, candidate, total);
    //คะแนนแต่ละคน, จำนวนผู้สมัคร, จำนวนคนที่โหวต
    return 0;
}

void RandomVote(int vote[][1], int student, int candidate){
    for(int i = 0; i < student; i++){   //i=0 ถึง i=499  = 500
        vote[i][0] = rand() % (candidate + 1);
    }
}

void Calculate(int vote[][1], int student, int score[]){
    for(int i = 0; i < student; i++){
        if(vote[i][0] != 0){
            score[vote[i][0] - 1]++;
        }
    }
}

void Display(int score[], int candidate, int total){
    cout << "\nNumber of right student : " << 500 << endl;
    cout << "Number of Votes : " << total
         << " = "
         << fixed << setprecision(1)
         << (double)total / 500 * 100 << "%" << endl;

    cout << "Number of not Votes : " << 500 - total
         << " = "
         << fixed << setprecision(1)
         << (double)(500 - total) / 500 * 100 << "%" << endl;
    cout << "\nResult of election chairman\n";
    cout << "-----------------------------\n";
    cout << "No.       Votes    Percent(%)\n";
    cout << "-----------------------------\n";
    for(int i = 0; i < candidate; i++){
        cout << setw(3) << i + 1
             << setw(10) << score[i]
             << setw(12) << fixed << setprecision(2)
             << (double)score[i] / total * 100
             << endl;
    }
    cout << "-----------------------------\n";
    cout << "Total" << setw(9) << total
         << setw(12) << fixed << setprecision(2)
         << 100.00 << endl;
}