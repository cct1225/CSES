#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        long long int y,x;
        cin>>y>>x;
        if(y>=x)
        {
            if(y%2==0)  cout<<(y-1)*(y-1)+y+(y-x)<<'\n';
            else    cout<<(y-1)*(y-1)+x<<'\n';
        }
        else if(x%2==0)
        {
            cout<<(x-1)*(x-1)+y<<'\n';
        }
        else cout<<(x-1)*(x-1)+x+(x-y)<<'\n';
    }
}