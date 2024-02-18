#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<long long ,long long>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].second>>v[i].first;
    }
    sort(v.begin(),v.end());
    
    long long cur=0;
    long long cnt=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].second>=cur)  
        {
            cur=v[i].first;
            cnt++;
        }
    }
    cout<<cnt;



}