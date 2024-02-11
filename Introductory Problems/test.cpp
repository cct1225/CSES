#include<iostream>
#include<string>
using namespace std;

int main() {
    long long int n;
    long long int two = 0, five = 0;
    cin >> n;

    for (long long int i = 1; i <= n; i++) {
        long long int num = i; // Preserve the original value of i

        // Count factors of 2
        while (num % 2 == 0) {
            two++;
            num /= 2;
        }

        // Count factors of 5
        while (num % 5 == 0) {
            five++;
            num /= 5;
        }
    }

    cout << min(two, five);
    return 0;
}
