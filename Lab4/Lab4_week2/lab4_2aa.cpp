#include <iostream>
using namespace std;
void greeting_time(float);
int main(){
    float time;
    cout << "Enter Time : ";
    cin >> time ;
    greeting_time(time);
    
    return (0);
}

void greeting_time(float time){
    if((time >= 0.00) && (time < 24.00)){
        if((time >= 0.00) && (time < 12.00))
            cout << "Good Morning";

        else if((time >= 12.00) && (time < 18.00))
            cout << "Good Afternoon";

        else if((time >= 18.00) && (time < 24.00))
            cout << "Good Evening";
    }
    else
        cout << "Time is out of range";
}
