// Last updated: 12/6/2025, 1:09:11 AM
1class Solution {
2    public boolean containsDuplicate(int[] nums) {
3        HashSet<Integer> Set=new HashSet<>();
4        for(int i:nums){
5            if(Set.contains(i)) return true;
6            else{
7                Set.add(i);
8            }
9        }
10        return false;
11
12        
13    }
14}