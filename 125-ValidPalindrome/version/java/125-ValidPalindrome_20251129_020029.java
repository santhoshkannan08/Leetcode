// Last updated: 11/29/2025, 2:00:29 AM
1class Solution {
2    public void reverseString(char[] s) {
3        int left =0;
4        int right= s.length-1;
5        while(left<right){
6            char temp;
7            temp=s[left];
8            s[left]=s[right];
9            s[right]=temp;
10            left++;
11            right--;
12
13        }
14
15        
16        
17    }
18}