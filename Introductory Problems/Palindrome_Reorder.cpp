#include<iostream>
#include<string>
#include<deque>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    string s,odd="";
    string str="";
    cin>>s;
    map<char, int> cnt;
    for (char i:s) {
        cnt[i]++;
    }
    for(auto i :cnt)
    {
        if(i.second%2==1)
        {
            odd+=i.first;
        }
    }
    if(odd.size()>1)    cout<<"NO SOLUTION";
    else
    {
        for(auto i:cnt)
        {
            for(int j=0;j<i.second/2;j++)
            {
                cout<<i.first;
                str+=i.first;
            }
        }
        cout<<odd;
        for(int i=str.size()-1;i>=0;i--)
        {
            cout<<str[i];
        }
    }

}
