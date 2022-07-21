class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        long shiftAMT = 0;
        for (int i = shifts.size() - 1; i >= 0; i--)
        {
            shiftAMT += shifts[i];
            s[i] = ((s[i] - 'a' + shiftAMT) % 26) + 'a';
            
        }        
        return s;
    }
    
};