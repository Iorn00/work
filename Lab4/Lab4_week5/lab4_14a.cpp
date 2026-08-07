#include <iostream>
using namespace std;
int main(){
    // for(int i = 1;; i++){
        // if(i == 5)break;
// 1
// 2
// 3
// 4
// end loop

    for(int i = 1; i <= 5; i++){
        if(i == 3)continue;
// 1
// 2
// 4
// 5
// end loop

        cout << i << endl;
    }
    cout << "end loop" << endl;
}