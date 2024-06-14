#include<iostream>
#include<vector>
#include<queue>
#include<set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long t;
    multiset<long long> s;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        auto it = s.upper_bound(t); //找出集合中大於t的最小值
        if(it == s.end())//=集合中大於t的最小值是集合中最大的元素
        {
            s.insert(t);
        }
        else{
            s.erase(it);
            s.insert(t);
        }
    }
    cout<<s.size();
    

}
