class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int i = 0, k = 0;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        while(i < nums1.size() && k < nums2.size())
        {
            if (nums1[i] < nums2[k])
                i++;
            else if(nums1[i] > nums2[k])
                k++;
            else
            {
                ans.push_back(nums1[i]);
                i++;
                k++;
            }
        }
        
        
        return ans;
    }
};