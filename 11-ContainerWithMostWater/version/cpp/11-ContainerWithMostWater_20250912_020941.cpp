// Last updated: 9/12/2025, 2:09:41 AM
class Solution {
public:
    int maxArea(vector<int>& height) {

        int left=0;
        int right=height.size()-1;
        int maxarea=0;

        while (left<right){
            int length=right-left;
            int breadth=min(height[left],height[right]);
            int area=length*breadth;
            maxarea=max(maxarea,area);

            if(height[left]<height[right]){
                left++;
            }

            else {
                right--;
            }


        }
        return maxarea;


        
    }
};