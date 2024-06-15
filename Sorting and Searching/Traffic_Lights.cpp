#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    int x,n;
    cin>>x>>n;
    set<int>s; //紀錄天燈
    s.insert(0);
    s.insert(x);
    multiset<int>d;//紀錄距離
    d.insert(x);

    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        auto it1=s.upper_bound(p);//右邊的第一個
        auto it2=it1;
        it2--; //左邊的第一個
        d.erase(d.find(*it1-*it2));
        d.insert(p-*it2);
        d.insert(*it1-p);
        s.insert(p);
        cout<<*--d.end()<<endl;
    }
}
