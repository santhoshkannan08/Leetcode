// Last updated: 9/9/2025, 12:45:21 AM
class NumArray {
public:
    vector <int> sum;

    NumArray(vector<int>& nums) {
        int n=nums.size();
        sum.resize(n+1,0);

        
        for(int i=0;i<n;i++){
            sum[i+1]=sum[i]+nums[i];
        }
        

    }
    
    int sumRange(int left, int right) {

    
        return sum[right+1]-sum[left];

        
    }
};
