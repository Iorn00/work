#include <iostream>
#define PI 3.1415
using namespace std;
int main(){
    float redius, area, circum;
    cout << "Program Calculate Area Circle." << endl;
    cout << "Circle radius (real number) ? ";
    cin >> redius;
    cout << "\n";
    area = PI*redius*redius;
    circum = 2*PI*redius;
    cout << "Area of circle with redius" << redius <<" is " << area << endl;
    cout << "Circumference is " << circum << endl;

    return 0;
}