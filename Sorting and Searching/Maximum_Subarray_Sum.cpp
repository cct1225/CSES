#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    vector<long long>v;
    cin>>n;
    long long int dp[200001];
    for(int i=0;i<n;i++)
    {
        long long int num;
        cin>>num;
        v.push_back(num);
    }
    long long ans=v[0];
    dp[0]=ans;
    for(int i=1;i<n;i++)
    {
        dp[i]=max(dp[i-1]+v[i],v[i]);
        ans=max(ans,dp[i]); //compare the current ans to the latest dp
    }
    cout<<ans;
}