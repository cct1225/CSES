#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    int n,target;
    cin>>n>>target;
    const int MOD = (int)1e9 + 7;
    vector<int> C;
    int num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        C.push_back(num);
    }
    vector<int>dp(target+1,0);
    dp[0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=C[i];j<=target;j++)
        {
               dp[j]+=dp[j-C[i]];
               dp[j] %= MOD;
        }
    }
    cout<<dp[target];
    
}
