class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int leftM=height[left];
        int rightM=height[right];
        int ans=0;
        while(left<right){
            if(leftM<rightM){
                left++;
                leftM=max(leftM,height[left]);
                ans+=leftM-height[left];

            }
            else{
                right--;
                rightM=max(rightM,height[right]);
                ans+=rightM-height[right];
            }

        }
        return ans;
    }
};
