#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string Str1 = "Microwarehouse";
    string Str2 = "Soft";
    string Str3;

    cout << "Value Str1 = " << Str1;
    cout << ", Lenght Str1 = " << strlen(Str1.c_str()) << endl;
    cout << "Value Str2 = " << Str2;
    cout << ", Lenght Str2 = " << Str1.size() << endl;
    cout << "Value Str3 = " << Str1;
    cout << ", Lenght Str3 = " << Str1.length() << endl;

    switch(Str1.compare(Str2)){
        case 0 : cout << "Str1 equal Str2" << endl; break;
        case 1 : cout << "Str1 more than Str2" << endl; break;
        case -1 : cout << "Str1 less than Str2" << endl; break;
    }
    cout << "Now find 's' in Str3" << endl;
    int pos = Str3.find("s");
    if(pos > -1) cout << "found 's' in Str3 at position " << pos << endl;
    else cout << "not found 's' in Str3" << endl;
    Str1.erase(5,4);
    cout << "After erase charecter in Str1 " << Str1 << endl;
    Str1.replace(5,4, "chippp");
    cout << "After replace charecter to Str1 " << Str1 << endl;
    cout << Str1.substr(0,5) + Str2.substr(5,4) << endl;

    return 0;
}