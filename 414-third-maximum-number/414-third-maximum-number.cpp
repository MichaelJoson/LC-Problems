class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = INT64_MIN;
        long long second = INT64_MIN;
        long long third = INT64_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > first)
            {
                first = nums[i];
            }
        }
        if (nums.size() < 3)
        {
            return first;
        }
            
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > second && nums[i] < first)
            {
                second = nums[i];
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > third && nums[i] < second)
            {
                third = nums[i];
            }
        }
        if (third != INT64_MIN)
        {
            return third;
        }
            
        
        return first;
    }
};