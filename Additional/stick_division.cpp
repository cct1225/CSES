#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
//using priority queue
using namespace std;
//像是把他們接回去
int main()
{
    long long int x,n;
    cin>>x>>n;
    
        priority_queue <long long int, vector<long long int>, greater<long long int>> pq;
        long long int ans = 0;

        for (long long int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            pq.push(x);
        }
        while (pq.size() > 1)
        {
            long long int a = pq.top();
            pq.pop();
            long long int b = pq.top();
            pq.pop();
            pq.push(a + b);
            ans += (a + b);
        }

        cout << ans << endl;
}

    
