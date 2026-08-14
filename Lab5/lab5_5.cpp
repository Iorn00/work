#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    float Redius, Angle;
    const int WIDTH = 9;

    cout << " + " << setfill('=') << setw(50) << " + " << endl;
    cout << " :     Angle   :   Sine    :   Cosine   : Tangent : " << endl;
    cout << " + " << setfill('=') << setw(50) << " + " << endl;
    cout << setfill(' ') << fixed;
    for(Angle = 0.0; Angle <= 360.0; Angle += 20){
        Redius = (Angle > 0.0)? (180.0f * 3.14f) / Angle : 0.0;
        cout << " : " << setprecision(2) << setw(WIDTH) << Angle;
        cout << " : " << setw(WIDTH) << sin(Redius);
        cout << " : " << setw(WIDTH) << cos(Redius);
        cout << " : " << setw(WIDTH) << tan(Redius);
        cout << " : " << endl;

    }
    cout << " + " << setfill('=') << setw(50) << "+" << endl;


    return 0;
}