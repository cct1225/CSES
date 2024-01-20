#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int applicants, apartments, k, num;
    cin >> applicants >> apartments >> k;
    long long int A[applicants + 1];
    
    for (int i = 0; i < applicants; i++)
    {
        cin >> A[i]; //the desired apartment size of each applicant
    }
    
    sort(A, A + applicants);
    
    vector<long long int> vec;
    
    for (int i = 0; i < apartments; i++)
    {
        cin >> num; //the size of each apartment
        vec.push_back(num);
    }
    
    sort(vec.begin(), vec.end());
    
    int cnt = 0;
    
    int i = 0, j = 0; 
    while (i < applicants && j < apartments)
    {
        if (abs(vec[j] - A[i]) <= k)
        {
            cnt++;
            i++;
            j++;
        }
        else if (vec[j] < A[i])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    
    cout << cnt;

    return 0;
}
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int applicants, apartments, k, num;
    cin >> applicants >> apartments >> k;
    long long int A[applicants + 1];
    
    for (int i = 0; i < applicants; i++)
    {
        cin >> A[i];
    }
    
    sort(A, A + applicants);
    
    vector<long long int> vec;
    
    for (int i = 0; i < apartments; i++)
    {
        cin >> num;
        vec.push_back(num);
    }
    
    sort(vec.begin(), vec.end());
    
    int cnt = 0;
    
    for (int i = 0; i < applicants; i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j] == A[i])
            {
                cnt++;
                vec.erase(vec.begin() + j);
                break;  // Break out of the inner loop after finding a match
            }
            else if (vec[j] <= A[i] + k && vec[j] >= A[i] - k)
            {
                cnt++;
                vec.erase(vec.begin() + j);
                break;  // Break out of the inner loop after finding a match
            }
        }
    }
    
    cout << cnt;

    return 0;
}
*/