#include <iostream>
#include <iomanip>
#include <iterator>
using namespace std;
void func2();
void func3();
int main(){
    const int ROW = 3, COL = 5;
    // int A[ROW][COL];
    // for (int i = 0; i < ROW; i++){
    //     for (int j = 0; j < COL; j++){
    //         A[i][j] = ((i * COL)+ j);
    //         cout << setw(4) << A[i][j] << " " ;
    //     }
    //     cout << endl;
    // }
    // func2();
    func3();
    return 0;
}

void func2(){
    char CH[3][4] = {
        {'S','U','N','D'},
        {'M','O','N','D'},
        {'F','R','I','D'}
    };
    cout << "CH Size = " << sizeof(CH) << endl;
    cout << "CH[0] Size = " << sizeof(CH[0]) << endl;

    // for (int i = 0; i < size(CH); i++){
    //     for (int j = 0; j < COL; j++){
    //         A[i][j] = ((i * COL)+ j);
    //         cout << setw(4) << A[i][j] << " " ;
    //     }
    //     cout << endl;
    // }
}
void func3(){
    char Month[12][10] = {
        "January", "February", "March", "April", 
        "May", "June", "July", "August", 
        "September", "October", "November", "December"
    };
    int rows = sizeof(Month)/sizeof(Month[0]);
    int cols = sizeof(Month)/sizeof(Month[0][0]);
    cout << rows << endl;
    cout << cols << endl;
    for (int i = 0; i < rows; i++){
        cout << "Month" << i << " = " << Month[i] << endl;
    }
    for (int i = 0; i < rows; i++){
        cout << "Month" << i << " = ";
        for (int j = 0; j < rows; j++){
            cout << "[" << Month[i][j] << "]" ;
        }
        cout << endl;
    }
}