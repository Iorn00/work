#include <iostream>
using namespace std;
int main(){
char Name [20];
    cout << "Input FirstWord:";
    cin.getline(Name,20);
    cout << "Name = " << Name << endl;
    cout << "Inpout AnyWord:";
    cin.getline(Name,20);
    cout << "Name = " << Name << endl;
    cout << "Debug in Array:" << endl;
    for (int i= 0; i < 20; i++){
        if(Name[i] == '0'){
            cout << "[" << i << "]=\\0" << endl;
        }else {
            cout << "[" << i << "]=" << Name[i] << endl;
        }
}
    return (0);
}