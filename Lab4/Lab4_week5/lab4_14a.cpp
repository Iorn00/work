#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i <= 5; i++){
        if(i == 3)continue;
        cout << i << endl;
    }
    cout << "end loop" << endl;
}
//ผลัพธ์
// 1
// 2
// 4
// 5
// end loop

//========================================
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i = 1;; i++){
//         if(i == 5)break;

//         cout << i << endl;
//     }
//     cout << "end loop" << endl;
// }
// ========ผลัพธ์=========
// 1
// 2
// 3
// 4
// end loop