#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
string Name;
int main(){
    ifstream data; // อ่านไฟล์เดิม 
    ofstream temp; // เขียนไฟล์ใหม่
    
    string id, name, findid;
    int score;
    data.open("new_s.dat", ios_base::in);//เปิดเพื่ออ่าน
    temp.open("temp.dat", ios_base::out);//เปิดเพื่อเขียน

    cout << "Enter id to remove";   //ID ไหนจะลบ
    cin >> findid;
    data >> id >> name>> score;
    while(!data.eof()){
        if(strcmp(id.c_str(), findid.c_str()) != 0){
            temp << id << " " << name << " " << score;
        }
        data >> id >> name >> score;
    }
    data.close();
    temp.close();

    //save to temp.dat;
    //remove("s.dat");
    rename("temp.dat","s.dat");

    return (0);
}