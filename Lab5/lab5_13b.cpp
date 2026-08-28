#include <iostream>
using namespace std;
void printInfo(string name, int age=18);

int main(){
    printInfo("John",25);
    printInfo("Alex");
    return (0);
}
void printInfo(string name, int age){
    cout << name << ",Age " << age << endl;
}