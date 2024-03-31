#include <iostream> 
#include <cstring> 
#include <algorithm> 
using namespace std;
int main()
{
    int n,tar;
    cin>>n>>tar;
    int a[101],dp[1000005];
    memset(dp,0x3f,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j+a[i]<=tar;j++)
        {
            dp[j+a[i]]=min(dp[j+a[i]],dp[j]+1);
        }
    }

}
