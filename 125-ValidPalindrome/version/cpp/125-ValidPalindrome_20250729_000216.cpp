// Last updated: 7/29/2025, 12:02:16 AM
class Solution {
public:
    bool isPalindrome(string& s, int i = 0) {
        if (i == 0) {
            string cleaned;
            for (char c : s) {
                if (isalnum(c)) cleaned += tolower(c);
            }
            s = cleaned;
        }

        int n = s.size();
        if (i >= n / 2) return true;
        if (s[i] != s[n - i - 1]) return false;
        return isPalindrome(s, i + 1);
    }
};
