# Last updated: 7/26/2025, 2:32:34 AM
class Solution(object):
    def reverse(self, x):
        rev = 0
        sign = -1 if x < 0 else 1
        x = abs(x)
        
        while x != 0:
            rev = rev * 10 + x % 10
            x = x // 10

        rev *= sign

        
        if rev < -2**31 or rev > 2**31 - 1:
            return 0
        return rev

            