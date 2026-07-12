#include <iostream>
using namespace std;
int main(){
    cout << "bool\t= " << sizeof(bool)<< " bytes" << endl;
    cout << "char\t= " << sizeof(char)<< " bytes" << endl;
    cout << "short\t= " << sizeof(short)<< " bytes" << endl;
    cout << "int \t= " << sizeof(int)<< " bytes" << endl;
    cout << "long\t= " << sizeof(long)<< " bytes" << endl;
    cout << "int64_t\t= " << sizeof(int64_t)<< " bytes" << endl;
    cout << "float \t= " << sizeof(float)<< " bytes" << endl;
    cout << "double\t= " << sizeof(double)<< " bytes" << endl;
    cout << "long long\t= " << sizeof(long long)<< " bytes" << endl;
    cout << "long double\t= " << sizeof(long double)<< " bytes" << endl;

    return 0;

}