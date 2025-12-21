class Solution {
public:

    bool checkRows(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> seen;
            for (int j = 0; j < 9; j++) {
                char c = board[i][j];
                
                if (c == '.'){
                    continue;
                }
                
                if (seen.count(c)) {
                    return false;
                }
                
                seen.insert(c);    
            }
        }
        return true;
    }

    bool checkColumns(vector<vector<char>>& board) {
    for (int i = 0; i < 9; i++) {
            unordered_set<char> seen;
            for (int j = 0; j < 9; j++) {
                char c = board[j][i];
                
                if (c == '.'){
                    continue;
                }
                
                if (seen.count(c)) {
                    return false;
                }
                
                seen.insert(c);    
            }
        }
        return true;
    }

    bool checkBoxes(vector<vector<char>>& board) {
        unordered_set<char> seen[9];
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j];
                
                if (c == '.'){
                    continue;
                }
                
                int index = (i / 3) * 3 + (j / 3);
                
                if (seen[index].count(c)) {
                    return false;
                }
                
                seen[index].insert(c);
            }
        }
        return true;
    }



    bool isValidSudoku(vector<vector<char>>& board) {
        return (checkRows(board) && checkColumns(board) && checkBoxes(board));
    }
};