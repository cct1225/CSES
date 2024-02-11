#include<iostream>
#include<set>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
    long long int n, k, a[20001];
    multiset<long long> s;

    cin >> n >> k;

    for(long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    if(k % 2 == 1) {//is odd
        for(long long i = 0; i < n - k + 1; i++) {
            int sum = 0;
            s.clear();
            for(long long j = i; j < i + k; j++) {
                s.insert(a[j]);
            }
            auto it = s.begin(); // Iterator to the beginning of the multiset
            std::advance(it, k / 2 ); // Move the iterator to the middle element
            int middle=*it;
            for(auto x : s) {
                sum += abs(x - middle);
            }
            cout << sum << " ";
        }
    } else {
        for(long long i = 0; i < n - k + 1; i++) {
            int sum=0;
            s.clear();
            for(long long j = i; j < i + k; j++) {
                s.insert(a[j]);
            }
            auto it = s.begin(); // Iterator to the beginning of the multiset
            std::advance(it, k / 2 - 1); // Move the iterator to the second middle element

            auto it2 = it;
            std::advance(it2, 1); // Move it2 to the next element 移至他後面那個
            int middle = (*it + *it2) / 2; // Calculate the median for even 'k'
            
            for(auto x : s) {
                sum += abs(x - middle);
            }
            cout << sum << " ";
        }
    }

    return 0;
}
