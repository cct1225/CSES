#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,amount;
    const int MOD = (int)1e9 + 7;
    cin>>n>>amount;
    int coins[101];
    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    vector<int>dp(amount+1,0);
    dp[0]=1;

    for(int j=0;j<=amount;j++)//注意i,j;
    {
        for(int i=0;i<n;i++)//coins
        {
            if(j-coins[i]>=0)   dp[j]+=dp[j-coins[i]];
            dp[j] %= MOD;
        }
    }
    cout<<dp[amount];
}
