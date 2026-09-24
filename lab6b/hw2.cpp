#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
void getdata(int id[], char name[][20], double score[][4]);
void sortdata(int id[], char name[][20], double score[][4]);
void average(double avg[], double score[][4]);
void displaydata(int id[], char name[][20], double score[][4], double avg[]);

int main(){
    int id[20];
    char name[20][20];
    double score[20][4];
    double avg[4];

    getdata(id, name, score);
    average(avg, score);
    sortdata(id, name, score);
    displaydata(id, name, score, avg);
    return 0;
}

void getdata(int id[], char name[][20], double score[][4]){
    cout << "Enter ID, NAME, SCORE3 of 20 students : "<< endl;
    for (int i = 0; i < 20; i++){
        cin >> id[i] >> name[i];
        cin >> score[i][0];
        cin >> score[i][1];
        cin >> score[i][2];

        score[i][0] = score[i][0] * 0.25;
        score[i][1] = score[i][1] * 0.25;
        score[i][2] = score[i][2] * 0.50;
        score[i][3] = score[i][0]
                    + score[i][1]
                    + score[i][2];
    }
}

void sortdata(int id[], char name[][20], double score[][4]){
    int tempId;
    char tempName[20];
    double temp;

    for (int i = 0; i < 19; i++){
        for (int j = i + 1; j < 20; j++){
            if (score[i][3] < score[j][3]){
                tempId = id[i];
                id[i] = id[j];
                id[j] = tempId;

                strcpy(tempName, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tempName);

                for (int k = 0; k < 4; k++){
                    temp = score[i][k];
                    score[i][k] = score[j][k];
                    score[j][k] = temp;
                }
            }
        }
    }
}

void average(double avg[], double score[][4]){
    for (int j = 0; j < 4; j++){
        avg[j] = 0;
        for (int i = 0; i < 20; i++){
            avg[j] = avg[j] + score[i][j];
        }
        avg[j] = avg[j] / 20;
    }
}

void displaydata(int id[], char name[][20], double score[][4], double avg[]){
    cout << fixed << setprecision(2);
    cout << "--------------------------------------------------------------------------\n";
    cout << "No.   Id     Name          Test1(25%)  Test2(25%)  Test3(50%)  Total(100%)\n";
    cout << "--------------------------------------------------------------------------\n";

    for (int i = 0; i < 20; i++){
        cout << left
             << setw(5) << i + 1
             << setw(9) << id[i]
             << setw(8) << name[i]
             << right
             << setw(12) << score[i][0]
             << setw(12) << score[i][1]
             << setw(12) << score[i][2]
             << setw(13) << score[i][3]
             << endl;
    }
    cout << "--------------------------------------------------------------------------\n";
    cout << left << setw(22) << "Average"
         << right
         << setw(12) << avg[0]
         << setw(12) << avg[1]
         << setw(12) << avg[2]
         << setw(13) << avg[3]
         << endl;
}