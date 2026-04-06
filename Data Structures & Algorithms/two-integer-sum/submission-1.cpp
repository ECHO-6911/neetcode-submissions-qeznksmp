class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        int size=nums.size();
        for(int i=0;i<size;i++){
            mpp[nums[i]]=i;
        }
        
        for(int i=0;i<size;i++){
            
            if(mpp.find(target-nums[i])!=mpp.end() && mpp[target-nums[i]]!=i){
                ans.push_back(i);
                ans.push_back(mpp[target-nums[i]]);
                break;
            }
            
        }
        return ans;

    }
};
