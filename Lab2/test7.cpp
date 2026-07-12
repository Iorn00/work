#include <iostream>
using namespace std;
int main(){
    int price, vat;
    int amount, net;
    cout << "VAT Calculator" <<endl;
    
    cout << "=========================" <<endl;
    cout << "Enter PRICE : "; cin >> price;
    cout << "Enter VAT : "; cin >> vat;

    amount = price * vat / 100;
    net = price + amount;

    cout << "Net Price of Product" <<" = "<< net << endl;
    cout << "=" <<endl;

    cout << "Net Price (Including VAT) : " << net << endl;
    cout << "Price Excluding VAT" <<" = "<< price << endl;
    cout << "VAT Amount " <<" = "<< amount << endl;
    
    cout << "=========================" <<endl;

    return 0;
}