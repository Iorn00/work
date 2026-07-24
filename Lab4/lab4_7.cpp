#include <iostream>
#include <string>
using namespace std;
int main(){
    string Name;
    int Number;
    cout << "Enter String : ";
    cin >> Name;
    cout << "Enter Number : ";
    cin >> Number;
    cout << endl;

    for(int n = 1; n<=Number; n++)
        cout << n << " : " << Name << endl;
        cout << endl;

    for(int n = Number; n>=1; n--)
        cout << n << " : " << Name << endl;
        cout << endl;        
        return 0;
}