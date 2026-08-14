#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char Str1[30], Str2[30];

    cout << "Enter string 1 : ";
    cin >> Str1;
    cout << "Enter string 2 : ";
    cin >> Str2;    

    cout << endl;
    cout << "strcat(Str1, Str2) = " << strcat(Str1, Str2) << endl;
    cout << "strchr(Str1, 's') = " << strchr(Str1, 's') << endl;
    cout << "strcmp(Str1, Str2) = " << strcmp(Str1, Str2) << endl;
    cout << "strlen(Str1) = " << strlen(Str2) << endl;
    return 0;
}
