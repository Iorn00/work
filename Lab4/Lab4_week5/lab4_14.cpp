#include <iostream>
using namespace std;
int main(){
    char Ch;
    int Count = 0;
    string Str;
    cout << "Enter String : ";
    while((Ch = cin.get())!= '\n'){
        Count++;
        Str += Ch;
    }
    cout << "Length of string(" << Str << ") is " << Count << endl;
    return 0;
}