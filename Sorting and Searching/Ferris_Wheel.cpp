#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    long long int x;
    cin>>n>>x;
    vector<long long int>v(n);
    vector<bool>g(n, false);
    for(long long int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long int ans=0;
    long long int i=0;
    long long int j=n-1;
    while(i<j)
    {
        if(v[i]+v[j]<=x)
        {
            ans++;
            g[i]=true;
            g[j]=true;
            i++;
            j--;
        }
        else
        {
            j--;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(g[i]==false)
        {
            ans++;
        }
    }
    cout<<ans;

}
