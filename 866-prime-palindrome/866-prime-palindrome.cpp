class Solution {
public:
    bool prime (int n)
    {
        if (n == 0 || n == 1)
            return false;
        for (long long int i = 2; i*i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    
    bool palindrome (int n)
    {
        string s = to_string(n);
        int i = 0;
        int k = s.length() - 1;
        while (i < k)
        {
            if (s[i] != s[k])
                return false;
            i++;
            k--;
        }
        
        return true;
    }
    
    
    int primePalindrome(int n) {
        if (99899*1e2 <= n && n <= 1e8)
            return 100030001;
        while (true)
        {
            if (palindrome(n) && prime(n))
                return n;
            n++;
        }
        

    }
    
    
};