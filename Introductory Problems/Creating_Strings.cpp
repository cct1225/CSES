#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string s;
    vector<string>v;
    cin>>s;
    int cnt=0;
    sort(s.begin(), s.end());
    do {
        v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
