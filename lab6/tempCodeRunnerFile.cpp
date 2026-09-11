#include <iostream>
using namespace std;
void ModifyArray(int Temp[], int);
void ModityElement(int Temp[]);
int main(){
    int Data[]= {1, 2, 3, 4, 5};
    cout << "Effects of passing entrie array pass-by-reference. \n";
    cout << "Original array's value :";
    for(int i = 0; i < 5; i++){ cout << Data[i] << " "; } cout << endl;
    ModifyArray(Data, size(Data));
    cout << "Modified array's value :";
    for(int i= 0; i < 5; i++){ cout << Data[i] << " "; } cout << endl;
    cout << "Effects of Passing array element pass-by-value\n";
    cout << "Data[3] Before modify element :";
    cout << Data[3] << endl;
    ModityElement(Data[3]);
    cout << "Data[3] After modify element :";
    cout << Data[3] << endl;
    return (0);
}

void ModifyArray(int Temp[], int size){
    for (int i = 0; i < size; i++) {
        Temp[i] *= 2;
    }
}