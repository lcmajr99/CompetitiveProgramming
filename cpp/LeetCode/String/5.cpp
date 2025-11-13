#include <iostream>

using namespace std;

class Solution {
   public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) return s;
        int start = 0, maxLen = 1;

        // Tentar todas as combinações de início e fim
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (isPalindrome(s, i, j)) {
                    int len = j - i + 1;
                    if (len > maxLen) {
                        maxLen = len;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start, maxLen);
    }

    bool isPalindrome(const string& s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }
};

int main() {
    Solution sol = Solution();
    string a;
    cin >> a;
    a = sol.longestPalindrome(a);
    cout << a << endl;
}