#include <iostream>
#include <vector>
using namespace std;
class Student{
    private:
        string name;
        string id;

    public:
    Student(string name, string id): name(name), id(id){}
    void displayinfo()const{
        cout << "Student ID : " << id << "|Name" << name << endl;
    }
    string getName() const{ return this -> name;}
};

class ClassRoom{
    private:
        string roomName;
        vector<Student*> students;
    public:
        ClassRoom(string name): roomName(name){}
        void addStudent(Student * student){
            students.push_back(student);
        }
        void showClassList() const{
            cout << "== Class : " << roomName << "==\n";
            for (const auto& student : students){
                student -> displayinfo();
            }
        }
};