#include<iostream>
using namespace std;
int dp[1000001];
int main()
{
    int n;
    cin>>n;
    dp[0] = 1; //only one step
    int mod=1e9+7;
    for(int i=1;i<=n;i++) //dp[1~n]
    {
        for(int j=1;j<=6;j++)
        {
            if(j>i) break;
            dp[i]=(dp[i]+dp[i-j])%mod;
        }
    }
    cout<<dp[n];
}
