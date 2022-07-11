class Solution {
public:
    bool isSubsequence(string s, string t) {
        int indexFound = 0;
        for (int i = 0; i < t.length() && indexFound < s.length(); i++)
        {
            if (s[indexFound] == t[i])
            {
                indexFound++;
            }
        }
        return (indexFound == s.length());
    }
};