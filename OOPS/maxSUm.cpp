#include <iostream>
#include <vector>
using namespace std;

int find_optimal_x(int n) {
    int optimal_x = 2;
    int max_sum = 0;

    for (int x = 2; x <= n; ++x) {
        int k = n / x;
        int sum = x * k * (k + 1) / 2;

        if (sum > max_sum) {
            max_sum = sum;
            optimal_x = x;
        }
    }

    return optimal_x;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << find_optimal_x(n) << endl;
    }

    return 0;
}

