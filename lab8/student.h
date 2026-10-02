#include <iostream>
using namespace std;
class Student{
    private:
        string name;
        int score;
    public:
        //setter
        void setScore(int s){
            score = s;
        }
        void setName(string name){
            this -> name = name;
        }

        //getter
        int showScore(){
            return score;
        }
        
        void show(){
            cout << name << " : " << score;
        }
};