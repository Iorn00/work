#include <iostream>
#include <fstream>
using namespace std;
void DeleteDate(int id);
void EditData(int id, int newid);
int main(){
    // DeleteDate(14);
    EditData(15, 25);
    return 0;
}

void DeleteDate(int id){
    ifstream in("data.txt");
    ofstream out("temp.txt");

    int x;
    while (in >> x){
        if(x != id) out << x << " ";
    }
    in.close();
    out.close();

}

void EditData(int id, int newid){
    ifstream in("data.txt");
    ofstream out("temp.txt");

    int x;
    while (in >> x){
        if(x != id) out << x << " ";
        else out << id << " ";
    }
    in.close();
    out.close();

}