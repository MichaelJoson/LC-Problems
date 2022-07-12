class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int x = 0; x < grid.size(); x++)
        {
            for (int y = 0; y < grid[0].size(); y++)
            {
                if (grid[x][y] < 0)
                    count++;
            }
        }
        return count;
    }
};