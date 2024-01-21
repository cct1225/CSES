/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        while(1)
        {
            if(b>a) swap(a,b);
            if(a<0||b<0)    
            {
                cout<<"NO"<<endl;
                break;   
            }
            if(a==0&&b==0)  
            {
                cout<<"YES"<<endl;
                break;
            }
            a=a-2;
            b=b-1;
        }
    }
}*/
#include<iostream>
using namespace std;

int main() {
    long long int n, a, b;
    cin >> n;

    while (n--) {
        cin >> a >> b;

        // Check if a and b satisfy the conditions for reaching the destination
        if ((2 * b - a) % 3 == 0 && (2 * a - b) % 3 == 0 && (2 * b - a) >= 0 && (2 * a - b) >= 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

