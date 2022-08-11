class Solution {
    public boolean isValidSudoku(char[][] board) {
        
        HashSet<String> traversed = new HashSet();
        for(int i = 0; i < 9; i++)
        {
            for(int j =0; j < 9; j++)
            {
                char current = board[i][j];
                if (current != '.')
                {
                    if(!traversed.add(current + "row" + i) 
                       || !traversed.add(current + "column" + j) 
                       || !traversed.add(current + "sub-group" + i/3 + j/3))
                        return false;
                }
            }
        }
        return true;
            
                
    }
}