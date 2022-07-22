class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int j = 0;
        int i = 0;
        
        int longestCount = INT_MIN;
        int k = INT_MAX;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0 && k > i)
                k = i;
            else if (nums[i] == 0 && k < i)
            {
                longestCount = max(longestCount, i-j-1);
                j = k + 1;
                k = i;
            }
        }
        longestCount = max(longestCount, i-1-j);
        return longestCount;
    }
};