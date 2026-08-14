#include <iostream>
using namespace std;
int main(){
    int IntValue;
    float FloatValue;
    string StrValue;

    cout << "Enter string number :";
    cin >> StrValue;

    IntValue = atoi(StrValue.c_str());
    FloatValue = atof(StrValue.c_str());
    cout << "Convert to integer = " << IntValue << endl;
    cout << "Convert to float   = " << FloatValue << endl;

    srand(IntValue);
    cout << "Now random integer number 100 number : " << endl;
    cout << "************************************" << endl;
    int vmin = 9999999, vmax = 0;
    for(int N=1, Num; N <=10000; N++){
        // int rMax = 5; //0.5 5+1
        // Num = rand()%(rMax+1);

        int rMin = -5;
        int rMax = 5; //0.5 5+1 -5 -5
        Num = rand()%((abs(rMax) + abs(rMin))+1) + (rMin);
        if(Num > vmax) vmax = Num;
        if(Num < vmin) vmin = Num;
        // cout << Num << " ";
        // if(N%20 == 0) cout << endl;
    }
    cout << endl;
    cout << "min = " << vmin << endl;
    cout << "max = " << vmax << endl;
    return (0);
}