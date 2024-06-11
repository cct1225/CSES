#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0; // 初始化 sum
    vector<long long int> v(n);
    vector<long long> cmp; // 使用 long long 以防止溢出
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    
    long long avg = v[n/2]; // 計算平均值

    // 計算每個元素與 avg 的絕對差值之和
    long long cnt1 = 0;
    for (int i = 0; i < n; i++) {
        cnt1 += abs(v[i] - avg);
    }
    cmp.push_back(cnt1);

    
    cout << cmp[0] << endl;
    
    return 0;
}
