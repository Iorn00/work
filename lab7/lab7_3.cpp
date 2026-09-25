#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
string CalGrade(int);
int Menu();
void AddStudent(string FN);
void DisplayStudent(string FN);
void ReportGrade(string FN);

int main(){
    const string Filename = "student.dat";
    ifstream InFile;
    ofstream OutFile;
    int c;
    do{
        c = Menu();
        switch (c){
        case 1: AddStudent(Filename); break;
        case 2: DisplayStudent(Filename); break;
        case 3: ReportGrade(Filename); break;
        case 0: break;
        default: cout << "Error try again" << endl;
        }
    }while (c != 0);
    cout << "Exit Program." << endl;
    return 0;
}

    int Menu(){
    int Choose;
    cout << "Program Add-Display Student Data\n";
    cout << "============================================" << endl;
    cout << "             : Main Menu" << endl;
    cout << "============================================\n";
    cout << ": 0 - Exit\n";
    cout << ": 1 - Add Student\n";
    cout << ": 2 - Display Student\n";
    cout << ": 3 - Report Grade\n";
    cout << "============================================\n";
    cout << "Enter choose :";
    cin >> Choose;
    return (Choose);
}

void AddStudent(string FN){
    ofstream OutFile(FN, ios_base::out | ios_base::app);
    if (OutFile.is_open()){
        string Id, Name, Score;
        cout << "Add Student\n";
        cout << "Enter ID : ";      cin >> Id;
        cout << "Enter NAME : ";    cin >> Name;
        cout << "Enter SCORE : ";   cin >> Score;

        OutFile << Id << " " << Name << endl;
        OutFile.close();
        char wait;
        cin.get(wait);
    }else{
        cout << "File could not opened." << endl;
    }
}
void DisplayStudent(string FN){
    ifstream InFile(FN, ios_base::in);
    if(InFile.is_open()){
        string Id, Name;
        int Score;
        int n = 0;
        cout << "List Student \n";
        cout << "====================\n";
        cout << right << setw(3) << "No." << left << setw(6) << "Id Name\n";
        cout << "====================\n";    

        InFile >> Id >> Name >> Score;
        while (!InFile.eof()){
            n = n+1;
            cout << right << setw(3) << n << " : "
                << left << setw(6) << Id << " "
                << Name << endl;
            InFile >> Id >> Name >> Score;
        }
        InFile.close();
        char wait;
        cin.get(wait);
    }else{
        cout << "File could not opened." << endl;
    }
}

void ReportGrade(string FN){
    ifstream InFile(FN, ios_base::in);
    if(InFile.is_open()){
        string Id, Name;
        int Score;
        int n = 0;
        cout << "List Student \n";
        cout << "====================\n";
        // cout << right << setw(3) << "No." << left << setw(6) << "Id Name\n";
        cout << "No.     Id      Name        Score   Grade\n";
        cout << "====================\n";    

        InFile >> Id >> Name >> Score;
        while (!InFile.eof()){
            n = n+1;
            cout << right << setw(3) << n << " : "
                << left << setw(6) << Id << " "
                << setw(20) <<Name << " "
                << setw(3) << Score << " "
                << CalGrade(Score)
                << endl;
            InFile >> Id >> Name >> Score;
        }
        InFile.close();
        char wait;
        cin.get(wait);
    }else{
        cout << "File could not opened." << endl;
    }
}
// string CalGrade(int){

//     return A;
// }