#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> T(200002, 0); // 差分陣列多一個位置來處理邊界

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        T[a] += 1;
        if (b + 1 < T.size())
        {
            T[b + 1] -= 1;
        }
    }

    int max = 0, current = 0;
    for (int i = 0; i < T.size(); i++)
    {
        current += T[i];
        if (current > max)
        {
            max = current;
        }
    }

    cout << max;
}
