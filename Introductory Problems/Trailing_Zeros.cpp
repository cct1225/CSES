/*#include<iostream>
#include<vector>
using namespace std;

long long int rec(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * rec(n - 1);
}

int main()
{
    long long int n;
    cin>>n;
        long long int num = rec(n);
        vector<int>vec; // Choose a reasonable size
        int i = 0;
        int cnt = 0;
        while (num != 0)
        {
            vec.push_back( num % 10);
            num = num / 10;
        }

        /*cout << "Digits of factorial: ";
        for (int j = vec.size()-1; j >= 0; j--)
        {
            cout << vec[j] << " ";
        }
        cout << endl;*/

        // Find the count of consecutive zeros
        /*
        cnt = 0;
        int maxcount=0;
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j] == 0)
            {
                cnt++;
                if(cnt>maxcount)    maxcount=cnt;
            }
            else
            {
                cnt = 0; // Reset count if a non-zero digit is encountered
            }
        }

        cout<<maxcount<< endl;
    

    return 0;
}*/
#include<iostream>
