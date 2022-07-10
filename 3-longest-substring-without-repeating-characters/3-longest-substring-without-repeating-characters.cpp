class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> found(128, -1);
        
        //int count = 0;
        
        
        int last_found = -1;
        int longest_substring = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (found[s[i]] != -1)
            {                
                last_found = max(last_found, found[s[i]]);
                //count++;    
                
            }
            longest_substring = max(longest_substring, i - last_found);
            
            found[s[i]] = i;
        }
        
        return longest_substring;
    }
};