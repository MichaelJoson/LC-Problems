class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane's Algorithm
        int max_current = 0, max_global = INT_MIN;
        if(nums.size() == 1)
            return nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            max_current += nums[i];
            
            max_current = max(nums[i], max_current);
            max_global = max(max_current, max_global);
        }
        return max_global;
    }
};