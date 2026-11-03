
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdio>
using namespace std;

// Function Declaration
int Menu();
void AddFood(string FN);
void DisplayFood(string FN);
void EditFood(string FN);
void DeleteFood(string FN);
void OrderFood(string FN);

int main(){

    string Filename = "food.dat";
    int c;

    do{
        c = Menu();

        switch(c){
            case 1: AddFood(Filename); break;
            case 2: DisplayFood(Filename); break;
            case 3: EditFood(Filename); break;
            case 4: DeleteFood(Filename); break;
            case 5: OrderFood(Filename); break;
            case 0: break;

            default:
                cout << "Error try again" << endl;
        }

    }while(c != 0);

    cout << "Exit Program." << endl;

    return 0;
}

// Main Menu
int Menu(){

    int Choose;

    cout << "\n=================================\n";
    cout << "       RESTAURANT POS SYSTEM\n";
    cout << "=================================\n";
    cout << ": 1 - Add Food\n";
    cout << ": 2 - Display Food\n";
    cout << ": 3 - Edit Food\n";
    cout << ": 4 - Delete Food\n";
    cout << ": 5 - Order Food\n";
    cout << ": 0 - Exit\n";
    cout << "=================================\n";
    cout << "Enter choose : ";

    cin >> Choose;

    return Choose;
}


/* ******************************** case1 ******************************** */
void AddFood(string FN){

    ofstream OutFile(FN, ios_base::out | ios_base::app);

    if(OutFile.is_open()){

        string Id, Name;
        int Price, Quantity;

        cout << "\nAdd Food\n";
        cout << "Enter Food ID : ";
        cin >> Id;

        cout << "Enter Food Name : ";
        cin >> Name;

        cout << "Enter Price : ";
        cin >> Price;

        cout << "Enter Quantity : ";
        cin >> Quantity;

        OutFile << Id << " "
                << Name << " "
                << Price << " "
                << Quantity << endl;

        OutFile.close();

        cout << "Add food successfully.\n";

    }else{
        cout << "File could not opened." << endl;
    }
}


/* ******************************** case2 ******************************** */
void DisplayFood(string FN){

    ifstream InFile(FN);

    if(InFile.is_open()){

        string Id, Name;
        int Price, Quantity;
        int n = 0;

        cout << "\nList Food\n";
        cout << "================================================\n";

        cout << left << setw(6) << "No."
             << setw(10) << "ID"
             << setw(15) << "Name"
             << setw(10) << "Price"
             << "Quantity\n";

        cout << "================================================\n";

        while(InFile >> Id >> Name >> Price >> Quantity){

            n = n + 1;

            cout << left << setw(6) << n
                 << setw(10) << Id
                 << setw(15) << Name
                 << setw(10) << Price
                 << Quantity << endl;
        }

        InFile.close();

        if(n == 0)
            cout << "No food data.\n";

    }else{
        cout << "File could not opened." << endl;
    }
}


/* ******************************** case3 ******************************** */
void EditFood(string FN){

    ifstream InFile(FN);
    ofstream TempFile("temp.dat");

    if(!InFile.is_open() || !TempFile.is_open()){
        cout << "File could not opened.\n";
        return;
    }

    string Id, Name, FindId, NewName;
    int Price, Quantity, NewPrice, NewQuantity;
    bool Found = false;

    cout << "\nEnter Food ID to edit : ";
    cin >> FindId;

    while(InFile >> Id >> Name >> Price >> Quantity){

        if(Id == FindId){

            cout << "New Food Name : ";
            cin >> NewName;

            cout << "New Price : ";
            cin >> NewPrice;

            cout << "New Quantity : ";
            cin >> NewQuantity;

            TempFile << Id << " "
                     << NewName << " "
                     << NewPrice << " "
                     << NewQuantity << endl;

            Found = true;

        }else{

            TempFile << Id << " "
                     << Name << " "
                     << Price << " "
                     << Quantity << endl;
        }
    }

    InFile.close();
    TempFile.close();

    remove(FN.c_str());
    rename("temp.dat", FN.c_str());

    if(Found)
        cout << "Edit food successfully.\n";
    else
        cout << "Food ID not found.\n";
}


/* ******************************** case4 ******************************** */
void DeleteFood(string FN){

    ifstream InFile(FN);
    ofstream TempFile("temp.dat");

    if(!InFile.is_open() || !TempFile.is_open()){
        cout << "File could not opened.\n";
        return;
    }

    string Id, Name, FindId;
    int Price, Quantity;
    bool Found = false;

    cout << "\nEnter Food ID to delete : ";
    cin >> FindId;

    while(InFile >> Id >> Name >> Price >> Quantity){

        if(Id != FindId){

            TempFile << Id << " "
                     << Name << " "
                     << Price << " "
                     << Quantity << endl;

        }else{
            Found = true;
        }
    }

    InFile.close();
    TempFile.close();

    remove(FN.c_str());
    rename("temp.dat", FN.c_str());

    if(Found)
        cout << "Delete food successfully.\n";
    else
        cout << "Food ID not found.\n";
}


/* ******************************** case5 ******************************** */
void OrderFood(string FN){

    ifstream InFile(FN);
    ofstream TempFile("temp.dat");
    ofstream OrderFile("order.dat", ios::app);

    if(!InFile.is_open() ||
       !TempFile.is_open() ||
       !OrderFile.is_open()){

        cout << "File could not opened.\n";
        return;
    }

    string Id, Name, FindId;
    string OrderName;

    int Price, Quantity;
    int OrderQuantity;
    int Total = 0;

    bool Found = false;
    bool Enough = true;

    cout << "\nOrder Food\n";
    cout << "Enter Food ID : ";
    cin >> FindId;

    cout << "Enter Quantity : ";
    cin >> OrderQuantity;

    if(OrderQuantity <= 0){
        cout << "Invalid quantity.\n";

        InFile.close();
        TempFile.close();
        OrderFile.close();

        remove("temp.dat");
        return;
    }

    while(InFile >> Id >> Name >> Price >> Quantity){

        if(Id == FindId){

            Found = true;

            if(OrderQuantity <= Quantity){

                Total = Price * OrderQuantity;
                OrderName = Name;

                TempFile << Id << " "
                         << Name << " "
                         << Price << " "
                         << Quantity - OrderQuantity
                         << endl;

            }else{

                Enough = false;

                TempFile << Id << " "
                         << Name << " "
                         << Price << " "
                         << Quantity << endl;
            }

        }else{

            TempFile << Id << " "
                     << Name << " "
                     << Price << " "
                     << Quantity << endl;
        }
    }

    InFile.close();
    TempFile.close();

    if(Found && Enough){

        remove(FN.c_str());
        rename("temp.dat", FN.c_str());

        cout << "\n=================================\n";
        cout << "       RESTAURANT RECEIPT\n";
        cout << "=================================\n";

        cout << "Food Name : " << OrderName << endl;
        cout << "Quantity  : " << OrderQuantity << endl;
        cout << "Price     : " << Total / OrderQuantity << endl;

        cout << "---------------------------------\n";
        cout << "Total     : " << Total << " Baht\n";
        cout << "=================================\n";

        OrderFile << FindId << " "
                  << OrderName << " "
                  << OrderQuantity << " "
                  << Total << endl;

        cout << "Order successfully.\n";

    }else{

        remove("temp.dat");

        if(!Found)
            cout << "Food ID not found.\n";
        else
            cout << "Not enough food quantity.\n";
    }

    OrderFile.close();
}

