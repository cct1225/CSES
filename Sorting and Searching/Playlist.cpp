#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    v[n] = -1;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    map<int,int>m;
    int r=0, l=0;
    int cnt=0;
    while(r<n)
    {
        while(m[v[r]]==0&&r<n)
        {
            m[v[r]]++;
            r++;
        }
        cnt=max(cnt,(r-l));
        m[v[l]]--; //整個列往右移
        l++;
    }
    cout<<cnt;
}
