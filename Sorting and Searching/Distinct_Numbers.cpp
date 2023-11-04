#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int a[200001];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])    cnt++;
    }
    cout<<cnt;
}