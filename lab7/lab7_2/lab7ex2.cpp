#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
int Menu();
void AddName(string FN);
using namespace std;

int main(){
    string name;
    int score;
    cout << "Enter Name : ";
    getline(cin, name, ',');
    cout << name;
    cout << "Enter Score : ";
    cin >> score;
    cout << score;
    return 0;
}
    int Menu(){
    int Choose;
    cout << ": 1 - Add Data\n";
    cout << ": 2 - Change Name by Name\n";
    cout << ": 0 - Exit\n";
    cout << "============================================\n";
    cout << "Enter choose :";
    cin >> Choose;
    return (Choose);
}

void AddName(string FN){
    ofstream OutFile(FN);
    if (OutFile.is_open()){
        string Name, Score;
        cout << "Add Name\n";;
        cout << "Enter NAME : ";    cin >> Name;
        cout << "Enter SCORE : ";   cin >> Score;

        OutFile << Name << endl;
        OutFile.close();
        char wait;
        cin.get(wait);
    }else{
        cout << "File could not opened." << endl;
    }
}

// กรอก ข้อความตามด้วย ., >> Enter Name : Orn N.,80
// ผลลัพธ์ Orn N.Enter Score : 80