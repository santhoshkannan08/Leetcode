// Last updated: 7/29/2025, 12:02:46 AM
class Solution {
public:
    bool isPalindrome(string s) {
        
        string clean;
        for(char ch:s)
        {
            if(isalnum(ch))
            {
                clean+=tolower(ch);
            }
        }
        int i=0,j=clean.size()-1;
        
        while(i<j)
        {
            if(clean[i++]!=clean[j--])
            {
                return false;
            }
        }

        return true;
    }
};