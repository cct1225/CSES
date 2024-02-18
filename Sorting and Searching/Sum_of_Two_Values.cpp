#include<map>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int x;
    cin>>x;
    map<int,int>m;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        long long int num;
        cin>>num;
        v.push_back(num);
        //m[num]=i;
    }
    
    for(int i=0;i<n;i++)
    {
        if(m.count(x-v[i])) //®Ú¾Úkey ¦³§ä¨ì
        {
            cout<<i+1<<" "<<m[x-v[i]]+1<<endl;
            return 0;
        }
        m[v[i]] = i;   
    }
    cout << "IMPOSSIBLE\n";



}