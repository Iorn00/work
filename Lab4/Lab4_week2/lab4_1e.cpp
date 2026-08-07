#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    unsigned int seed;
    int z1;

    cout << "To intalize the random number generator,\n";
    cout << "please enter an integer value : ";
    cin >> seed;
    srand(seed);

    z1 = rand()%10;
    cout << z1%10 << endl;
    
    return(0);
}