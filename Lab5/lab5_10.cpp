#include <iostream>
using namespace std;
int x, y;
void passByValue(int num){ //ส่ง “สำเนา” ของตัวแปรเข้าไป → แก้ค่าแล้ว ตัวแปรเดิมไม่เปลี่ยน
    num = 100;
}
void passByreference(int &num){ //ส่ง “ตัวแปรจริง” เข้าไป → แก้ค่าแล้ว ตัวแปรเดิมเปลี่ยน
    num = 100;
}
void calculateRectangle(double width, double height, double &area, double &perimeter){
    area = width * height;
    perimeter = 2 * (width + height);
}
int main(){
    int a = 10, b = 10;

    cout << "bf: Value of a : " << a << endl;
    passByValue(a);
    cout << "af: Value of a : " << a << endl;

    cout << "bf: Value of b : " << b << endl;
    passByreference(b);
    cout << "af: Value of b : " << b << endl;

    double w = 5.0, h = 3.0;
    double myArea = 0, myPerimeter = 0;
    calculateRectangle(w, h, myArea, myPerimeter);
    cout << "Width : " << w << ", Height : " << h << endl;
    cout << "Calculated Area : " << myArea << endl;
    cout << "Calculated Perimeter : " << myPerimeter << endl;
    return 0;
}