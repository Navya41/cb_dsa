class Solution {
    public:
    void f(int r, vector<string>& board, vector<vector<string>>& allBoards, int n, vector<bool>& columnstatus, vector<bool>& rightDiagstatus, vector<bool>& leftDiagstatus) {
        //base case
        if (r==n){
            allBoards.push_back(board);
            return;
        }
        //recursive case
        
        //f(r) = take decisions for queens Qr to Qn-1
        //decide for Qr
        for (int j=0; j<n; j++){
            if(columnstatus[j] == false and rightDiagstatus[r+j]==false and leftDiagstatus[(r-j)+(n-1)]==false){
                board[r][j] = 'Q';
                columnstatus[j] = true;
                rightDiagstatus[r+j]=true;
                leftDiagstatus[(r-j)+(n-1)]=true;
                f(r+1, board, allBoards, n, columnstatus, rightDiagstatus, leftDiagstatus);
                board[r][j] = '.'; //backtracking
                columnstatus[j] = false;
                rightDiagstatus[r+j]=false;
                leftDiagstatus[(r-j)+(n-1)]=false;
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
        vector<bool> columnstatus(n, false); 
        //tells if column n-1 is occupied by a queen 

        vector<bool> rightDiagstatus(2*n-1, false);
        vector<bool> leftDiagstatus(2*n-1, false);

        f(0, board, allBoards, n, columnstatus,rightDiagstatus, leftDiagstatus);
        return allBoards;
    }
};