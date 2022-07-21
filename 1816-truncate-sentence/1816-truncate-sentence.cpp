class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int count = 0;
        char delimiter = ' ';
        for (int i = 0; i < s.size(); i++)
        {
            ans.push_back(s[i]);
            if (s[i] == delimiter)
            {
                count++;
            }
            if (count >= k)
            {
                ans.pop_back();
            }
        }
        return ans;
    }
};