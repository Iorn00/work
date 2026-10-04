#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
void GetandWrite(ofstream & OutFile);
void ReadandDisplay(ifstream &Infile);
int main(){
//รับข้อมูลนักเรียน 3 คน > บันทึกลงไฟล์ > อ่านไฟล์ > แสดงข้อมูลนักเรียน
    string Filename;
    ofstream OutFile;
    ifstream InFile;

    cout << "===" << endl;
    cout << "Enter file name : ";
    cin >> Filename;
    cout << endl;

    OutFile.open(Filename);
    cout << "Now open File " << Filename << " for write." << endl;
    GetandWrite(OutFile);
    OutFile.close();

    InFile.open(Filename);
    ReadandDisplay(InFile);
    InFile.close();
    return 0;
}

void GetandWrite(ofstream & OutFile){
    string Id, Name, Surname;
    int Score;
    for (int n = 1; n <= 3; n++){
        cout << "Student No. " << n << endl;
        cout << "Enter Id : ";
        cin >> Id;
        cout << "Enter Name : ";
        cin >> Name;
        cout << "Enter Surname : ";
        cin >> Surname;
        cout << "Enter Score : ";
        cin >> Score;
        cout << "================" << endl;

        OutFile << Id << " " << Name << " " << Surname << " " << Score << " " << endl;
    }
    cout << endl;
}

void ReadandDisplay(ifstream &Infile){
    string Id, Name, Surname;
    int Score;
    for (int n = 0; n < 3; n++){
        Infile >> Id >> Name >> Surname >> Score;
        cout << "Id : " << Id << " Name : " << Name << " " << Surname << endl;
        cout << "Score : " << Score << endl;
    }
}