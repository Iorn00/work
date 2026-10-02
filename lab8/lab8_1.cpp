#include <iostream>
#include "student.h"
using namespace std;
int main(){
    Student student1;
    // student1.name;
    student1.setScore(60);
    cout << student1.showScore() << endl;
    student1.setName("Orn 3");
    student1.show();

    return 0;
}