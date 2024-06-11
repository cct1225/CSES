#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long target = n * (n + 1) / 2;

    if (target % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    vector<long long> v1, v2;
    cout << "YES" << endl;
    target /= 2;

    while (n > 0) {
        if (target - n >= 0) {
            v1.push_back(n);
            target -= n;
        } else {
            v2.push_back(n);
        }
        n--;
    }

    cout << v1.size() << endl;
    long long one=v1.size();
    for (int i = 0; i < one; i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << v2.size() << endl;
    long long two=v2.size();
    for (int i = 0; i < two; i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}
