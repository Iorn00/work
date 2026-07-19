#include <iostream>
// #include <cmath>
using namespace std;
void cal_grade(int);

int main() {
    int mark;
    cout << "Enter score : ";
    cin >> mark;
    cal_grade(mark);

    return 0;
}

void cal_grade(int mark){
    if(mark >= 80) cout << "A";
    else if(mark >= 70) cout << "B";
    else if(mark >= 60) cout << "C";
    else if(mark >= 50) cout << "D";
    else cout << "F";
}