class Solution{
public:
  bool isValidSudoku(vector<vector<char>> &board)
{
    int rows[9][9] = {0};       // rows[5][0] means whether number 1('0'+1) in row 5 has appeared.
    int cols[9][9] = {0};       // cols[3][8] means whether number 9('8'+1) in col 3 has appeared.
    int blocks[3][3][9] = {0};  // blocks[0][2][5] means whether number '6' in block 0,2 (row 0~2,col 6~8) has appeared.
    for (int r = 0; r < 9; r++)
        for (int c = 0; c < 9; c++)
            if (board[r][c] != '.')
            {                                  
                // calculate the number's index(board's number minus 1) 
                int number = board[r][c] - '1';
                if (rows[r][number]++)
                    return false;
                if (cols[c][number]++)
                    return false;
                if (blocks[r / 3][c / 3][number]++)
                    return false;
            }
    return true;
}
};
