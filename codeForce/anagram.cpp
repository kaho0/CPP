#include <iostream>
#include <cstring> // For memset

using namespace std;

int minAnagramOperations(string s, string t) {
    int count1[256] = {0}; // Character count for string s
    int count2[256] = {0}; // Character count for string t

    // Count character frequencies in strings s and t
    for (int i = 0; i < s.length(); i++) {
        count1[s[i]]++;
    }
    for (int i = 0; i < t.length(); i++) {
        count2[t[i]]++;
    }

    // Calculate minimum number of replacement operations
    int replacements = 0;
    for (int i = 0; i < 256; i++) {
        replacements += abs(count1[i] - count2[i]);
    }

    return replacements;
}

int main() {
    string s, t;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string t: ";
    cin >> t;

    int minOps = minAnagramOperations(s, t);

    cout << "Minimum number of replacement operations: " << minOps << endl;

    return 0;
}