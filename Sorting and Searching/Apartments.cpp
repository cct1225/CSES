#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int applicants,apartments,k,num;
    cin>>applicants>>apartments>>k;
    long long int A[applicants+1];
    for(int i=0;i<applicants;i++)
    {
        cin>>A[i];
    }
    sort(A,A+applicants);
    vector<long long int>vec;
    for(int i=0;i<apartments;i++)
    {
        cin>>num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    int cnt=0;
    for(int i=0;i<applicants;i++)
    {
        for(int j=0;j<vec.size();j++)
        {
            if(vec[j]==A[i])    
            {
                cnt++;
                vec.erase(vec.begin()+j);
                continue;
            }
            else if(vec[j]<=A[i]+k&&vec[j]>=A[i]-k)
            {
                cnt++;
                vec.erase(vec.begin()+j);
                continue;
            }
        }
    }
    cout<<cnt;
}