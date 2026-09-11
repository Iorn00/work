#include <iostream>
#include <iomanip>
using namespace std;
void Sort(int[], const int);
void Swap(int&, int&);

int main(){
    const int Max = 10;
    int Data[Max] = {50,0,44,7,3,100,12,36,72, 23};
    cout << "Data before sort in array .. \n";
    for (int n = 0; n < Max; n++) {
    cout << setw(5) << Data[n];
    }
    cout << "\nStart Sort ... \n";
    Sort(Data, size(Data));
    cout << "\nEnd Sort ... \n";
    cout << "Data After sort finish. \n";
    for (int n = 0; n < Max; n++){
        cout << setw(5) << Data[n];
    }
    cout << "\n";
    return (0);
}

void Sort(int Temp[], const int Size){
    int i,j,n;
    for(int i = 0; i < Size-1; i++){
        n = i;
        for(j = i; j < Size; j++)
            if(Temp[n] > Temp[j]) n=j;
        if(n != i) swap(Temp[i], Temp[j]);
    }
    cout << "\n" << i+1 << ":";
    for(j = 0; i < Size; j++){
    cout << setw(5) << Temp[j];
    }
}

void Swap(int&n1, int&n2){
    int temp = n1;
    cout << "Bf n1 = " << n1 << n2 << endl;
    n1 = n2;
    n2 = temp;
    cout << "Bf n1 = " << n1 << n2 << endl;
}