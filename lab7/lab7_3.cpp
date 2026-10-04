#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
using namespace std;

int Menu();
void AddStudent(string FN);
void DisplayStudent(string FN);
void ReportGrade(string FN);
void SearchStudent(string FN);
void DeleteStudent(string FN);
string CalGrade(int);

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
        case 4: SearchStudent(Filename); break;
        case 5: DeleteStudent(Filename); break;
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
    cout << "=====================================================================" << endl;
    cout << "                            : Main Menu" << endl;
    cout << "=====================================================================\n";
    cout << ": 0 - Exit\n";
    cout << ": 1 - Add Student\n";
    cout << ": 2 - Display Student\n";
    cout << ": 3 - Report Grade\n";
    cout << ": 4 - Search Student by Name\n";
    cout << ": 5 - Delete Student\n";
    cout << "=====================================================================\n";
    cout << "Enter choose : ";
    cin >> Choose;
    return (Choose);
}
/* ******************************** case1 ******************************** */
void AddStudent(string FN){     //case 1
    ofstream OutFile(FN, ios_base::out | ios_base::app);
    if (OutFile.is_open()){
        string Id, Name, Surname, Score;
        cout << "Add Student\n";
        cout << "Enter ID : ";      cin >> Id;
        cout << "Enter NAME : ";    cin >> Name;
        cout << "Enter SURNAME : "; cin >> Surname;
        cout << "Enter SCORE : ";   cin >> Score;

        OutFile << Id << " " << Name << " " << Surname << " " << Score << endl;
        OutFile.close();
        char wait;
        cin.get(wait);
    }else{
        cout << "File could not opened." << endl;
    }
}
/* ******************************** case2 ******************************** */
void DisplayStudent(string FN){
    ifstream InFile(FN, ios_base::in);  
    if(InFile.is_open()){
        string Id, Name, Surname;
        int Score;
        int n = 0;

        cout << "List Student \n";
        cout << "============================================\n";
        cout << left << setw(6) << "No."
             << setw(8) << "Id"
             << setw(15) << "Name"
             << setw(12) << "Surname"
             << "Score\n";
        cout << "============================================\n";

    while (InFile >> Id >> Name >> Surname >> Score){
        n = n + 1;
        cout << left << setw(6) << n
                 << setw(8) << Id
                 << setw(15) << Name
                 << setw(12) << Surname
                 << Score << endl;
    }
        InFile.close();
        char wait;
        cin.get(wait);
    }else{
        cout << "File could not opened." << endl;
    }
}
/* ******************************** case3 ******************************** */
void ReportGrade(string FN){
    ifstream InFile(FN, ios_base::in);
    if(InFile.is_open()){
        string Id, Name, Surname;
        int Score;
        int n = 0;
            
        cout << "List Student \n";
        cout << "========================================================\n";
        cout << left << setw(6) << "No."
             << setw(8) << "Id"
             << setw(15) << "Name"
             << setw(12) << "Surname"
             << setw(8) << "Score"
             << "Grade\n";
        cout << "========================================================\n";
        InFile >> Id >> Name >> Surname >> Score;

        while (!InFile.eof()){
            n = n + 1;
            cout << left << setw(6) << n
                 << setw(8) << Id
                 << setw(15) << Name
                 << setw(12) << Surname
                 << setw(8) << Score
                 << CalGrade(Score)
                 << endl;
            InFile >> Id >> Name >> Surname >> Score;
        }
        InFile.close();
        char wait;
        cin.get(wait);
    }else{
        cout << "File could not opened." << endl;
    }
}
/* ******************************** case4 ******************************** */
void SearchStudent(string FN){
    ifstream InFile(FN, ios_base::in);
    if(InFile.is_open()){
        string Id, Name, Surname, SearchName;
        int Score;
        bool found = false;

        cout << "Enter name : ";
        cin >> SearchName;
        InFile >> Id >> Name >> Surname >> Score;

        while(!InFile.eof()){
            if(Name == SearchName){
                cout << "========================================================\n";
                cout << left << setw(6) << "No."
                     << setw(8) << "Id"
                     << setw(15) << "Name"
                     << setw(12) << "Surname"
                     << setw(8) << "Score"
                     << "Grade\n";
                cout << "========================================================\n";

                cout << left << setw(6) << 1
                     << setw(8) << Id
                     << setw(15) << Name
                     << setw(12) << Surname
                     << setw(8) << Score
                     << CalGrade(Score)
                     << endl;
            found = true;
            }
            InFile >> Id >> Name >> Surname >> Score;
        }
        if(!found){
            cout << "Not Found" << endl;
        }
        InFile.close();
    }else{
        cout << "File could not opened." << endl;
    }
}
/* ******************************** case5 ******************************** */
void DeleteStudent(string FN){
    ifstream InFile(FN, ios_base::in);
    ofstream TempFile("temp.dat", ios_base::out);

    if(InFile.is_open()){
        string Id, Name, Surname, FindId;
        int Score;
        cout << "Enter " "'ID'" " to remove : ";
        cin >> FindId;

        InFile >> Id >> Name >> Surname >> Score;
        while(!InFile.eof()){
            if(strcmp(Id.c_str(), FindId.c_str()) != 0){
                TempFile << Id << " "
                         << Name << " "
                         << Surname << " "
                         << Score << endl;
            }
            InFile >> Id >> Name >> Surname >> Score;
        }
        InFile.close();
        TempFile.close();

        remove(FN.c_str());
        rename("temp.dat", FN.c_str());
    }else{
        cout << "File could not opened." << endl;
    }
}
/* ******************************** CalGrade ******************************** */
string CalGrade(int Score){
    if(Score >= 80)
        return "A";
    else if(Score >= 70)
        return "B";
    else if(Score >= 60)
        return "C";
    else if(Score >= 50)
        return "D";
    else
        return "F";
}