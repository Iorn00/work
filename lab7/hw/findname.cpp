#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>   //remove(),rename()
using namespace std;

int Menu();
void AddData(string FN);
void ChangeNameByName(string FN);

int main(){
    string FN = "data.txt";
    int c;
    do{
        c = Menu();
        switch(c){
            case 1: AddData(FN); break;
            case 2: ChangeNameByName(FN); break;
            case 0: break;

            default: cout << "Error try again" << endl;
        }
    }while(c != 0);
        cout << "Exit Program." << endl;
    return 0;
}

int Menu(){
    int Choose;
        cout << "\n=MENU=\n";
        cout << ": 1 - Add Data\n";
        cout << ": 2 - Change Name by Name\n";
        cout << ": 0 - Exit\n";
        cout << "===============================\n";
        cout << "\nEnter choose : ";
        cin >> Choose;
        cin.ignore();
    return Choose;
}
/* ******************************** case1 ******************************** */
void AddData(string FN){
    ofstream OutFile(FN, ios::app);
    if(!OutFile.is_open()){
        cout << "File could not opened.\n";
        return;
    }
    string Name;
    int Score;

    cout << "Enter Name  : ";
    getline(cin, Name);
    cout << "Enter Score : ";
    cin >> Score;
    cin.ignore();

    OutFile << Name << "," << Score << endl;
    OutFile.close();
    cout << "Add data successfully.\n";
}
/* ******************************** case2 ******************************** */
void ChangeNameByName(string FN){
    ifstream InFile(FN);
    ofstream TempFile("temp.txt");
    if(!InFile.is_open() || !TempFile.is_open()){
        cout << "File could not opened.\n";
        return;
    }
    string FindName;
    string NewName;
    string Name;
    string Score;
    bool Found = false;

    cout << "Find Name : ";
    getline(cin, FindName);
    cout << "New Name : ";
    getline(cin, NewName);

    while(getline(InFile, Name, ',')){
        if(getline(InFile, Score)){
            if(Name == FindName){
                TempFile << NewName << "," << Score << endl;
                Found = true;
            }
            else{
                TempFile << Name << "," << Score << endl;
            }
        }
    }
    InFile.close();
    TempFile.close();

    remove(FN.c_str());
    rename("temp.txt", FN.c_str());

    if(Found)
        cout << "Change name successfully.\n";
    else
        cout << "Name not found.\n";
}
