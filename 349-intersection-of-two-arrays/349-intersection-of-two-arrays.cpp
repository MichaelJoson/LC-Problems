class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                auto f = find(ans.begin(), ans.end(), nums2[j]);
                if ((nums1[i] == nums2[j]) &&  (f == ans.end()))
                {
                    ans.push_back(nums2[j]);
                }
            }
        }
        return ans;
    }
};