#include <iostream>
using namespace std;
void selectionsort(int temp[], int size);
void swap(int &a, int &b);
void bubblesort(int temp[], int size);

int binarysearch(int temp[], int size, int value);
int main(){
    int data[] = {7, 6, 4, 3, 2};
    for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++){
        cout << data[i] << " ";
    }
    cout << endl;
    // selectionsort(data, sizeof(data) / sizeof(data[0]));
    bubblesort(data, sizeof(data) / sizeof(data[0]));

    for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++){
        cout << data[i] << " ";
    }
    cout << endl;
}

void selectionsort(int temp[], int size){
    int N = size;
    int MIN;
    for (int i = 0; i < N-1; i++){
        MIN = i;
        for (int j = i+1; j < N; j++){
            if (temp[MIN] < temp[j]){
            MIN = j;
            cout << "change min " << MIN << endl;
            }
        }
        if (i < MIN){
            cout << "swap\n";
            swap(temp[MIN], temp[i]);
        } 
    }
}
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void bubblesort(int temp[], int size){
    int n  = size;
    int flag = 1;
    int e = n - 1;
    while (flag == 1){
        flag = 0;
        for (int j = 0; j < e; j++){
            if (temp[j] > temp[j + 1]){
                swap(temp[j], temp[j + 1]);
                 cout << "debug : ";
                for (int i = 0; i < n; i++){
                    cout << temp[i] << " ";
                }
                cout << endl;
                flag = 1;
            }
        }
        e = e -1;
    }
}
int binarysearch(int temp[], int size, int value){
    int lowb = 0, upperb = size -1, flag = 0;
    int r;
    while (flag == 0){
        r = int((lowb + upperb) / 2);
        if (temp[r] == value){
            flag = 1;
        }else{
            if (value > temp[r]){
                upperb = r - 1;
            }
            else{
                lowb = r + 1;
            }
            if (lowb > upperb){
                flag = 2;
            }
        }
    }
}