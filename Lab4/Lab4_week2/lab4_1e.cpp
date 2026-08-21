#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    unsigned int seed;
    int z1;

    cout << "To intalize the random number generator,\n";
    cout << "please enter an integer value : ";
    cin >> seed;
    srand(seed); //กำหนดจุดเริ่มต้นของการสุ่ม
    //rand() % 10 → เอาเศษจากการหาร 10 → ได้ 0 ถึง 9
    z1 = rand()%10; //เก็บเลขสุ่มไว้ใน z1
    cout << z1%10 << endl; //เอา z1 มาหาร 10 แล้วเอาเศษออกมา ซึ่งก็ยังได้ 0–9
    
    return(0);
}