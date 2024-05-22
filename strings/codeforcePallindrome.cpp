#include <iostream>
#include <string>
using namespace std;

string canBePalindromeByChangingOneChar(string s) {
    int n = s.length();
    int mismatchCount = 0;

    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            mismatchCount++;
        }
    }

    if (mismatchCount == 1 || (mismatchCount == 0 && n % 2 == 1)) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    string s;
    cin >> s;

    cout << canBePalindromeByChangingOneChar(s) << endl;

    return 0;
}
