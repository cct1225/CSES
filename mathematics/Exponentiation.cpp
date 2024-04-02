#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long a,b,cur=1;
        
        cin>>a>>b;

        //cout<<a<<" "<<b<<endl;

        for(int i=0;i<b;i++)
        {
            cur=(cur*a)%1000000007;
        }
        cout<<cur<<endl;
    }
}
