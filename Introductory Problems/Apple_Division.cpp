#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long m = 0; // 計算所有元素的總和
    vector<long long> v(n); // 向量大小為 n
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m += v[i];
    }

    long long ans = LLONG_MAX; // 初始化 ans 為 long long int 的最大值
    for (int i = 0; i < (1 << n); i++) { // 生成所有可能的子集
        long long sum = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) { // 檢查第 j 位是否為 1
                sum += v[j];
            }
        }
        ans = min(ans, abs(m - 2 * sum)); // 更新最小的絕對差值
    }
    cout << ans << endl;

    return 0;
}
