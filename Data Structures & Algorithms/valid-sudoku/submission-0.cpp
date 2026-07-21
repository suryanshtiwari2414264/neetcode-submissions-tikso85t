class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        unordered_set<string> seen;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                char num = board[i][j];
                if (num != '.')
                {
                    string r = "row" + to_string(i) + num;
                    string c = "col" + to_string(j) + num;
                    string b = "box" + to_string(i/3) + to_string(j/3) + num;
                    if (seen.count(r) || seen.count(c) || seen.count(b))
                    return false;
                    seen.insert(r);
                    seen.insert(c); 
                    seen.insert(b);
                }
            }
        }
        return true;
    }
};