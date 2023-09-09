#include<iostream>
using namespace std;
int main(){
    long long int n;
    int s;
    cin>>n;
    s=(n*(n+1))/2;
    int m;
    for(int j=0;j<n-1;j++)
    {
        cin>>m;
        s-=m;
    }
    cout<<s;
}