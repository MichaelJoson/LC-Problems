class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = INT_MAX;
        int start = 0, end = k-1;
        if (k == 0 || k == 1)
            return 0;
        while (end < nums.size())
        {
            int temp = (nums[end] - nums[start]);
            ans = min(ans, temp);
            start++;
            end++;
        }
        return ans;
    }
};