#include <iostream>
using namespace std;
int main(){
    int n, k;
    int dp[100000];
    cin >> n >> k;

    dp[n]=1;
    dp[n+1]=1;
    for (int i=n-1;i>0;i--){
        dp[i] = ((2*dp[i+1]-dp[min(i+k+1,n+2)])%2009+2009)%2009;
    }
    cout << dp[1];
    return 0;
}
