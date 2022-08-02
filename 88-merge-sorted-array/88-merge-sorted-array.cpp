class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        for(int i = 0; i < m; i++)
        {
            ans.push_back(nums1[i]);
        }
        for(int k = 0; k < n; k++)
        {
            ans.push_back(nums2[k]);
        }
        sort(ans.begin(), ans.end());
        nums1.clear();
        for(int j = 0; j < ans.size(); j++)
        {
            nums1.push_back(ans[j]);
        }
    }
};