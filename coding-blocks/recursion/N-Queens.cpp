class Solution {
    public:
    bool isvalid(vector<string>& board,int n, int r, int j){
        //check if there is any previously placed queens in jth column
        for(int i=r-1; i>=0; i--){
            if(board[i][j]=='Q'){
                //there is a queen in the jth column
                return false;
            } 
        }
        //check if there is any queens in right diagonal of jth column
        int step = 1;
        for (int i = r-1; i>=0 and j+step<n; i--){
            if (board[i][j+step]=='Q'){
                return false;
            }
            step++;
        }
        //check if there is any queens in left diagonal of jth column
        step = 1;
        for (int i=r-1; i>=0 and j-step >= 0; i--){
            if (board[i][j-step]=='Q'){
                return false;
            }
            step++;
        }
        //can place queen in jth column of row r
        return true;
    }
    void f(int r, vector<string>& board, vector<vector<string>>& allBoards, int n) {
        //base case
        if (r==n){
            allBoards.push_back(board);
            return;
        }
        //recursive case
        
        //f(r) = take decisions for queens Qr to Qn-1
        //decide for Qr
        for (int j=0; j<n; j++){
            if(isvalid(board, n, r, j)){
                board[r][j] = 'Q';
                f(r+1, board, allBoards, n);
                board[r][j] = '.'; //backtracking
                
            }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board;
        for (int i=1; i<=n; i++){
            string row(n,'.');
            board.push_back(row);
        }
        vector<vector<string>> allBoards;
        f(0, board, allBoards, n);
        return allBoards;
    }
};