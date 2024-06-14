#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    multiset<int> T;
    cin>>n>>m;
    long long num;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        T.insert(num);
    }
    int c;
    for(int i=0;i<m;i++)
    {   
        cin>>c;
        auto it=T.upper_bound(c);
        if(it==T.begin())   cout<<"-1"<<endl;
        else{
            --it; // Move iterator to the element just before upper_bound
            cout << *it << endl;
            T.erase(it);
        }
    }
    
}
