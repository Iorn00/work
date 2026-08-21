#include <iostream>
using namespace std;
int main(){
    string text;
    int upper = 0;
    int lower = 0;
    int space = 0;
    int special = 0;

    cout << "Enter message : ";
    getline(cin, text);

    int total_chars = text.length();
    for(int i = 0; i < text.length(); i++){
        if(text[i] >= 'A' && text[i] <= 'Z')
            upper++;
        else if(text[i] >= 'a' && text[i] <= 'z')
            lower++;
        else if(text[i] == ' ')
            space++;
        else
            special++;
    }

    cout << "Total " << total_chars <<" characters" << endl;
    cout << "Your message has " << upper << " upper characters." << endl;
    cout << "Your message has " << lower << " lower characters." << endl;
    cout << "Your message has " << space << " space characters." << endl;
    cout << "Your message has " << special << " special characters." << endl;

    return 0;
}