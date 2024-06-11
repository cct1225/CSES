#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    vector<int> Price(n);
    vector<int>Page(n);
    for(int i=0;i<n;i++)
    {
        cin >> Price[i];
    }
    for(int i=0;i<n;i++)
    {
        cin >> Page[i];
    }   

    vector<vector<int>> dp(n, vector<int>(p + 1, 0));

    for(int i=Price[0];i<=p;i++)
    {
        dp[0][i]=Page[0];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=p;j++)
        {
            if(j<Price[i])
            {
                dp[i][j]=dp[i-1][j];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-Price[i]]+Page[i]);
            }
        }
    }
    cout<<dp[n-1][p];

}
