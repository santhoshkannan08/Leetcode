// Last updated: 9/21/2025, 12:53:02 AM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                
                if(sum==k){
                    cnt++;
                }

            }
        }
        return cnt;
        
    }
};