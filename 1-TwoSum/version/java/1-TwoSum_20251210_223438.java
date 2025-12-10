// Last updated: 12/10/2025, 10:34:38 PM
1class Solution {
2    public int[] twoSum(int[] nums, int target) {
3        HashMap<Integer,Integer>hash=new HashMap<>();
4        for(int i=0;i<nums.length;i++){
5            int current=nums[i];
6            int value=target-current;
7            if(hash.containsKey(value)){
8                return new int []{hash.get(value),i};
9            }
10            else{
11                hash.put(current,i);
12            }
13        }
14        return null;
15    }
16}