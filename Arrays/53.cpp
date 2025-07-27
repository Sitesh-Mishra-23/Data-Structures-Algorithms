//53. Maximum Subarray

/*Given an integer array nums, find the subarray with the largest sum, and return its sum.
Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int current_sum=0;
        int max_sum = INT_MIN;

        for(int i =0;i<n;i++){
            current_sum+=nums[i];
            max_sum=max(current_sum,max_sum);

            if(current_sum<0){
                current_sum=0;
            }
        }

        return max_sum;
    }
};