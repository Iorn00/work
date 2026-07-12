#include <iostream>
using namespace std;
int main(){
    double ticket;
    int height;

   cout << "Enter Ticket Price : ";
   cin >> ticket;
   cout << "Enter Height(cm) : ";
   cin >> height;

   cout << "You are " << (height > 150 ? "adult" : "kid") << "." << endl;
    // cout << number << " is " << ((number % 2) == 0 ? "even" : "odd");
   cout << "Total Price : " <<(height > 150 ? ticket : ticket /2)<< endl;

    // height > 150 ? "adult" : "kid"
    // ถ้าจริง > แสดง "adult"
    // ถ้าเท็จ > แสดง "kid"

    // height > 150 ? ticket : ticket / 2
    // ถ้าสูงเกิน 150 > จ่ายเต็มราคา
    // ถ้าสูงไม่เกิน 150 > จ่ายครึ่งราคา เอาราคาเต็มมาหาร2
    return (0);
}