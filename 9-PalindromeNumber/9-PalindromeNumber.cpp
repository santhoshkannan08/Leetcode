// Last updated: 7/26/2025, 2:32:30 AM
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;  // Negative numbers are not palindromes

        int original = x;
        long reversed = 0;

        while (x > 0) {
            int lastDigit = x % 10;
            reversed = reversed * 10 + lastDigit;
            x /= 10;
        }

        return original == reversed;
    }
};
