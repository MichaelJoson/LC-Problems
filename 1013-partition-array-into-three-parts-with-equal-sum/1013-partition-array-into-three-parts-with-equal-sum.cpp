class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
    int total = accumulate(arr.begin(), arr.end(), 0);
    int targetSum = (accumulate(arr.begin(), arr.end(), 0))/3;
    int sum = 0;    
    int counter = 0;
    if (count(arr.begin(), arr.end(), 0) == arr.size())
            return true;
        
    if (total % 3 != 0)
    {
        return false;
    }
    
    
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == targetSum)
        {
            counter++;
            sum = 0;
        }
    }
    return counter >= 3;

    
    
    
    }
};