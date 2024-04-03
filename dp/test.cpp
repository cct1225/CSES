#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    long long int a[1001][1001];
    long long int dp[1001][1001]={0};

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='.')  a[i][j]=1;
            else    a[i][j]=0;
        }
    }

    for(int i=0;i<n&&a[i][0]==1;i++)    dp[i][0]=1;
    for(int j=0;j<n&&a[0][j]==1;j++)    dp[0][j]=1;

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[i][j]==0)  continue;
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    cout<<dp[n-1][n-1];


}
