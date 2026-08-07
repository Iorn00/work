#include <iostream>
using namespace std;
int main(){
    unsigned long Sum = 0L;
    int n, i = 1;
    cout << "Please enter value n of find summation of n*n : ";
    cin >> n;

    do{
        Sum += i*i;
        cout << i << " Sum = " << Sum << endl;
        i++;
    }while(i<=n);
    cout << "Sum = " << Sum << endl;
    return 0;
}