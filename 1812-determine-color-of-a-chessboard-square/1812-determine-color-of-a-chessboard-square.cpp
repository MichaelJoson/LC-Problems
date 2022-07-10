class Solution {
public:
    bool squareIsWhite(string coordinates) {
        vector<char> columns1{'a', 'c', 'e', 'g'};
        vector<char> columns2{'b', 'd', 'f', 'h'};
        for (int i = 0; i < columns1.size(); i++)
        {
            if (coordinates[0] == columns1[i])  
            {
                if (coordinates[1] % 2 == 0)
                    return true;
                return false;
            }
        }
        for (int i = 0; i < columns2.size(); i++)
        {
            if (coordinates[0] == columns2[i])
            {
                if (coordinates[1] % 2 == 0)
                    return false;
                return true;
            }
        }
        return false;
    }
};