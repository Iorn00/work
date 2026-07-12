#include <iostream>
using namespace std;

int main() {
    int startKM, endKM; // ไมล์เริ่มต้น, ไมล์สิ้นสุด
    int hour, minute, second; // ชั่วโมง, นาที, วินาที ที่ใช้เดินทาง
    double distance, timeTotal, avgVelocity;// ระยะทางที่วิ่งได้ (กม.) // เวลารวมทั้งหมด(ชั่วโมง) // ความเร็วเฉลี่ย (กม./ชม.)

    cout << "Data inputs are integer!." << endl;
    cout << "================================================" << endl;
    cout << "Enter start kilometer : ";
    cin >> startKM;
    cout << "Enter end kilometer : ";
    cin >> endKM;
    cout << "Enter time used (hour minute second) : ";
    cin >> hour >> minute >> second;
    cout << "================================================" << endl;

    distance = endKM - startKM; //ระยะทาง = ปลายทาง - เริ่มต้น
    timeTotal = hour + minute / 60.0 + second / 3600.0;
    //รวมเวลาให้เป็นหน่วยเดียวกันคือ ชั่วโมง
    //นาที หาร 60 = ชั่วโมง, วินาที หาร 3600 = ชั่วโมง ใส่ . ด้วย
    avgVelocity = distance / timeTotal; //ความเร็วเฉลี่ย = ระยะทาง / เวลา

    cout << "Car traveled " << distance << " kilometers in "
         << hour << " hrs " << minute << " min " << second << " sec." << endl;
    cout << "Average velocity was " << avgVelocity << " kph." << endl;

    return 0;
}