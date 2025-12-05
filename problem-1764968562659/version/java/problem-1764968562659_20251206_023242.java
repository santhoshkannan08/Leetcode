// Last updated: 12/6/2025, 2:32:42 AM
1class Solution {
2    public boolean isAnagram(String s, String t) {
3        HashMap<Character, Integer> freq = new HashMap<>();
4        if (s.length() != t.length())
5            return false;
6        char[] arr1 = s.toCharArray();
7        char[] arr2 = t.toCharArray();
8        for (int i = 0; i < s.length(); i++) {
9
10            freq.put(arr1[i], freq.getOrDefault(arr1[i], 0) + 1);
11            freq.put(arr2[i], freq.getOrDefault(arr2[i], 0) - 1);
12        }
13        for (int i : freq.values()) {
14            if (i != 0) {
15                return false;
16            }
17        }
18        return true;
19
20    }
21}