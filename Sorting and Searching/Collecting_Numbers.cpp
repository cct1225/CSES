#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        a[v[i]]=i;
    }
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(a[i+1]<a[i])//出現順序
        {
            cnt++;
        }
    }
    
    cout<<cnt;
}
