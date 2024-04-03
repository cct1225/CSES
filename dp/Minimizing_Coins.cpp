#include <iostream>
#include <cstring>
#include <climits>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
    int n, tar;
    cin >> n >> tar;

    int c[101];
    vector<int>dp(tar+1,INT_MAX);
    dp[0] = 0;

    for(int i = 0; i < n; i++) 
    {
        cin >> c[i];
    }


    for(int i = 0; i < n; i++) //遍歷硬幣
    {
        for(int j = c[i]; j <= tar; j++) 
        {    
            cout<<c[i]<<" "<<j<<endl;
            if(dp[j - c[i]] != INT_MAX) 
            {
                dp[j] = min(dp[j - c[i]] + 1, dp[j]); //從缺縫加一個當前硬幣or原做法
            }
            for(int i=0;i<=11;i++)
            {
                cout<<dp[i]<<" ";
            }
            cout<<endl;
        }
    }

    if(dp[tar] == INT_MAX)  cout << "-1";
    else    cout << dp[tar];

    return 0;
}
