#include <iostream>
#include <cstring>
using namespace std;
void displaychar(char Name[], int size);
int main(){
    char Name [20];
    strcpy(Name, "Thitima Aramchai");
    cout << Name << endl;
    // displaychar(Name, size(Name)); //size(Name)ไม่รองรับ
    displaychar(Name, strlen(Name));
    strcpy(Name, "Hello");
    cout << Name << endl;
    return (0);
}

void displaychar(char Name[], int size) {
    for (int i = 0; i < size; i++){
        cout << i << " : " << Name[i] << " : " << int(Name[i]) << endl;
    }
}