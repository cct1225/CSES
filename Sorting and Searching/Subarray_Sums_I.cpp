#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long n;
    long long x;
    cin>>n>>x;
    vector<long long>v(n);
    long long cnt=0;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long sum=0;
    int start=0;

    for(int end=0;end<n;end++)
    {
        sum+=v[end];
        while(sum>x)
        {
            sum-=v[start];
            start++;
        }
        if(sum==x)  cnt++;

    }
    cout<<cnt;
    

}
