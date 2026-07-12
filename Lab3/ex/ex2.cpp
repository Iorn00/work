#include <iostream>
using namespace std;
int main(){
    int m = 2;     
    int n = 3;      
    m = n + n;      // n(3) + n(3) = 6 > เก็บใน m > ตอนนี้ m มีค่าเป็น 6
    n = m * 1.5;    // m(6) * 1.5 = 9.0 > แต่ n เป็น int จะตัดทศนิยมทิ้ง n = 9 (ถ้าจะเอาเศษก็เปลี่ยน int เป็ร double)
    cout << "m = " << m << "n = " << n << endl;
    return (0);
}