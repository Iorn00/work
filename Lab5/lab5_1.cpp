    #include <iostream>
    #include <cctype>
    using namespace std;
    int main(){
        char Ch;
        string Messages;
        cout << "Enter charecter : " ;
        cin >> Ch;
        cout << "Current charecter is " << Ch << "\n";
        if(isalnum(Ch)){
            if(isalpha(Ch)){
                if(isupper(Ch)){
                Messages = "upper charecter\n";
                cout << "'"<< Ch << "' convert to lower "
                    << "'" << (char)tolower(Ch) << "'"<< endl;
            }else{
                if(isalpha(Ch)){
                Messages = "lower charecter\n";
                cout << ""<< Ch << "' convert to upper "
                    << "'" << (char)toupper(Ch) << "'"<< endl;
            }
        }
            }else{
                Messages = "digit.";
            }
        }else{
            Messages = "spcial chareter.";
        }
        cout << "'" << Ch << "' is " << Messages << endl;
        return 0;
    }