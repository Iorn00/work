#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float x1, x2, y1, y2, DT, DE;
    cout << "Enter x1 y1 : "; cin >> x1 >> y1;
    cout << "Enter x2 y2 : "; cin >> x2 >> y2;

    DT = abs(x1-x2)+abs(y1-y2);
    cout << "DT = " << DT << endl;
    DE = sqrt(pow(x1-x2,2.0)+pow(y1-y2,2.0));
    cout << "DE = " << DE << endl;
//วิธีกดเครื่องคิดเลข (2 - 3) กด |x| กด + (3 - 3) กด |x| กด =
    return (0);
}