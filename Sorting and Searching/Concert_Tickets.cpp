#include <iostream>
#include <vector>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> T(n); 
    vector<long long> C(m); 
    
    for (int i = 0; i < n; i++) {
        cin >> T[i]; 
    }
    for (int i = 0; i < m; i++) {
        cin >> C[i]; 
    }
    sort(T.begin(),T.end());

    long long cur;
    long long J;
    for(int i=0;i<m;i++)
    {
        long long goal=C[i];
        long long record = LLONG_MAX;
        bool find=false;
        for(int j=0;j<n;j++)
        {
            if (T[j]<=goal)
            {
                if(record>=abs(T[j]-goal))
                {
                    cur=T[j];
                    record=abs(T[j]-goal);
                    J=j;
                }
                find=true;
            } 
        }
        if(find==false||T.size()==0) cout<<"-1"<<endl;
        else    
        {
            cout<<cur<<endl;
            T.erase(T.begin()+J);
        }
    }   
}
