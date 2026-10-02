#include <iostream>
#include "time.h"
using namespace std;
int main(){
    Time t1;
    int h, m, s;
    cout << "Enter hour : ";
    cin >> h;
    cout << "Enter minutes : ";
    cin >> m;
    cout << "Enter second : ";
    cin >> s;
    t1 = Time(h, m, s);

    cout << "This Time is " << t1.getHours() << ":"
                            << t1.getMinutes() << ":"
                            << t1.getSecond() << endl;

    return 0;
}
//g++ lab8_3.cpp time.cpp  -o lab8_3 && lab8_3