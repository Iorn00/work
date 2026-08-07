#include <iostream>
using namespace std;
int main(){
    int year, maxday;
    cout << "Enter year : " ;
    cin >> year;
    if((year % 4)== 0){ //ถ้าปีหาร 4 ลงตัว = กุมภาพันธ์มี 29 วัน
        cout << "In " << year << " is leap year";
        maxday = 29;
    }else{ //ถ้าไม่หาร 4 ลงตัว = กุมภาพันธ์มี 28 วัน
        cout << "In " << year << " is not leap year";
        maxday = 28;
    }
    cout << "and February has " << maxday << " day.\n";
    return (0);
}

// #include <iostream>
// using namespace std;

// int main() {
//     int year, maxday;

//     cout << "Enter year : ";
//     cin >> year;

//     maxday = (year % 4 == 0) ? 29 : 28;

//     cout << "In " << year
//          << ((year % 4 == 0) ? " is leap year " : " is not leap year ");
//     cout << "and February has " << maxday << " day.\n";

//     return 0;
// }