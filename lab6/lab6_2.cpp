// #include <iostream>
// using namespace std;
// int main(){
//     int Square[10], i = 5;

//     for (int i = 0; i < 10; i++){
//     cout << "i = " << i << " " << endl;
//     Square[i] = i*i;
//     }
//     cout << Square[i] << endl;
//     cout << "last i = " << i << endl; 
//     return 0;
// }
// i = 0 
// i = 1 
// i = 2 
// i = 3 
// i = 4 
// i = 5 
// i = 6 
// i = 7 
// i = 8 
// i = 9 
// 25
// last i = 5
// *******************************************************
#include <iostream>
using namespace std;
int main(){
    int Square[10], i = 5;

    for (int i = 0; i < 10; i++){
    cout << "i = " << i << " ";
    Square[i] = i*i;
    cout << Square[i] << endl;
    }
    cout << "last i = " << i << endl; 
    return 0;
}
// i = 0 0
// i = 1 1
// i = 2 4
// i = 3 9
// i = 4 16
// i = 5 25
// i = 6 36
// i = 7 49
// i = 8 64
// i = 9 81
// last i = 5
// *******************************************************
