// 1920. Build Array from Permutation
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int size=nums.size();
        vector<int>ans;
        for(int i=0;i<size;i++){
            int index=nums[i];
            ans.push_back(nums[index]);
        }
        return ans;
        
    }
};