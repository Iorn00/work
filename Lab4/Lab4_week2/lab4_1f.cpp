#include <iostream>
#include <cmath>
using namespace std;
void fn1(int);
void fn2(int);
void fn3(float);
void fn4(float, char);
void fn5(int, float);

int main(){
    fn1(-1); //fn1 true
    fn1(0); //fn1 false

    fn2(1); //fn2 true
    fn2(0); //fn2 false

    fn3(2.4444); //fn3 true
    fn3(3.0001); //fn3 false

    fn4(2.4444, 'R'); //fn4 true
    fn4(1000.00001, 'L'); //fn4 false

    fn5(1,5); //fn5 true
    fn5(1,6); //fn5 false

    return(0);

}
void fn1(int x){
    if(x<0) cout << x << endl;
}
void fn2(int pastdue){
    int credit = 5; //ใช้แสดงค่าเมื่อเงื่อนไขเป็นเท็จ
    if(pastdue > 0) credit = 0;
    cout << pastdue << "credit = " << credit << endl;
}
void fn3(float x){ //เปรียบเทียบ
    if(x<=3.0){
        float y = 3 * sqrt(x);
        cout << y << endl;
    }
}
void fn4(float balance, char status){
    if((balance < 1000.0)||status == 'R')
    cout << balance << endl;
}
void fn5(int a, float b){
    int xmid = 0, ymid = 0;
    if((a>=0) && (b<=5)){
        xmid = (a + b)/2;
        ymid = (sqrt(xmid));
        cout << "xmid " << xmid << "," << ymid << endl;
    }
}