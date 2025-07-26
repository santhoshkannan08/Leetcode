// Last updated: 7/27/2025, 12:33:48 AM
class Solution {
public:
    bool isPalindrome(long long x) {
        long long dup=x;
        long long lastdigit=0;
        long long revnum=0;
        while(x>0){
            lastdigit=x%10;
            revnum=(revnum*10)+lastdigit;
            x/=10;
        }
        if(dup==revnum) return true;
        else return false;
        
    }
};