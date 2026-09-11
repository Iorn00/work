#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
using namespace std;

void ReadData(float []);
void CalculateData(const float[], float &, float &);
const int MAX_ITEM = 5;

int main(){
    float X[MAX_ITEM], Mean, St_Dev;
    int i;
    ReadData(X);
    CalculateData(X, Mean, St_Dev);
    cout << "The mean is ";
    cout << setw(7) << fixed << setprecision(2) << Mean << endl;
    cout << "Table of Difference between data values and mean \n";
    cout << "index Item Defference\n";
    cout << "=============================\n";
    for (i = 0; i < MAX_ITEM; i++){
        cout << setw(3) << i << " "
             << setw(10) << X[i] << " "
             << setw(10) << X[i]-Mean << " " << endl;
    }
    return 0;
}
void ReadData(float Temp[]){
    cout << "Enter " << MAX_ITEM;
    cout << " Numbers separated by blanks or <enter>:\n";
    for(int i=0; i<MAX_ITEM; i++){
        cin >> Temp[i];
    }
    cout << endl;
}

void CalculateData(const float Temp[], float &Mean, float &St_dev){
    float Sum, Sum_Sqr;
    Sum = Sum_Sqr = 0;
    for (int i = 0; i < MAX_ITEM; i++) Sum += Temp[i];
    Mean = Sum/MAX_ITEM;
    for (int i = 0; i < MAX_ITEM; i++)
        Sum_Sqr += pow(Temp[i]-Mean,2);
    St_dev = sqrt(Sum_Sqr/(MAX_ITEM-1));
    }
    