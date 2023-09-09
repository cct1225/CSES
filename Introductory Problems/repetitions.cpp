#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=1;
    char c=s[0];
    int l=s.size();
    int answer=0;
    for(int i=1;i<=l;i++)
    {
        if(c==s[i])
        {
            count++;
        }
        else    count=1;
        c=s[i];
        if(count>answer)    answer=count;
    }
    cout<<answer;
}