#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main() {
    long long int n, k;
    multiset<long long> s;

    cin >> n >> k;

    // Dynamically allocate memory for the array
    long long *a = new long long[n];

    for(long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    if(k % 2 == 1) {//is odd
        for(long long i = 0; i < n - k + 1; i++) {
            s.clear();
            for(long long j = i; j < i + k; j++) {
                s.insert(a[j]);
            }
            auto it = s.begin(); // Iterator to the beginning of the multiset
            std::advance(it, k / 2); // Move the iterator to the middle element
            cout << *it << " ";
        }
    } else {
        for(long long i = 0; i < n - k + 1; i++) {
            s.clear();
            for(long long j = i; j < i + k; j++) {
                s.insert(a[j]);
            }
            auto it = s.begin(); // Iterator to the beginning of the multiset
            std::advance(it, k / 2 - 1); // Move the iterator to the second element
            cout << *it << " ";
        }
    }

    // Free the dynamically allocated memory
    delete[] a;

    return 0;
}
