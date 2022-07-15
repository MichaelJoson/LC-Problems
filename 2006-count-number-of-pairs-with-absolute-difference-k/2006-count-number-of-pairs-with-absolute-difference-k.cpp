class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        int difference;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums.size(); j++)
            {
                difference = abs(nums[i]-nums[j]);
                if (i < j && difference == k)
                    count++;
            }
        }
        return count;
    }
};