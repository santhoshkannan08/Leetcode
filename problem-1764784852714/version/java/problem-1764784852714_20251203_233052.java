// Last updated: 12/3/2025, 11:30:52 PM
1class Solution {
2    public boolean containsDuplicate(int[] nums) {
3        HashSet<Integer>set= new HashSet<>();
4        for(int x:nums){
5            if(set.contains(x)) return true;
6            set.add(x);
7        }
8        return false;
9    }
10}