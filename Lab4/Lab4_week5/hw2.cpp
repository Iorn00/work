#include <iostream>
using namespace std;
int main(){
    int num;
    char ch;
    cout << "Input number line : ";
    cin >> num;
    cout << "Input character : ";
    cin >> ch;

    for(int i = 1; i <= num; i++){ //i = จำนวนบรรทัด
        for(int j = 1; j <= i; j++){ //j = จำนวนตัวอักษรในบรรทัด
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}