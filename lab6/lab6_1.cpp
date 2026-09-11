#include <iostream>
#include <iterator>
using namespace std;
int main(){
    int A[5] = {16,12,6,8,14};
    char B[] = {'A','E','I','O','U',};
    float C[10];
    cout << "Address A : " << &A << " Size = " << sizeof(A)/sizeof(A[0]) << endl; //size(A)*g++ --versionไม่รองรับ* เป็นsizeof(A)/sizeof(A[0]) 
    cout << "Size of " << sizeof(A)/sizeof(A[0]) << endl;
    for (int i = 0; i < 5; i++){
        cout << i << "Address = " << &A[i] << " Value = " << A[i]<< endl;
    }
    cout << "***************" << endl;
    cout << "Address B : " << &B << "Size = " << sizeof(B)/sizeof(B[0]) << endl;
    cout << "Size of " << sizeof(B)/sizeof(B[0]) << endl;
    for (int i = 0; i < 5; i++){
        cout << i << "Address = " << &B[i] << " Value = " << B[i]<< endl;
    }
    cout << "***************" << endl;
    for (int i = 0; i < sizeof(C)/sizeof(C[0]); i++){
        cout << i << "Address = " << &C[i] << " Value ";
    }
    
    
    return 0;
}