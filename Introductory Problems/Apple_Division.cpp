#include <bits/stdc++.h>
#define int long long
#define IOS ios::sync_with_stdio(0),cin.tie(0)
using namespace std;
int n,m = 0,arr[21];

void dp(){
    int ans = LONG_LONG_MAX;
    for(int i=0;i<(1<<n);i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            if(1<<j & i)
            {
                sum += arr[j];
            }
        }
        ans = min(ans,abs(m - sum - sum));
    }
    cout<<ans<<"\n";
}

signed main(){
    IOS;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m += arr[i];
    }
    dp();
}
