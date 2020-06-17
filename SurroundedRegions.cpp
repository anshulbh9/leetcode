class Solution {
public:
    void fillcolor(vector<vector<char>>&board,int x,int y){
        if(x<0||y<0||x>=board.size()||y>=board[0].size()){
            return;
        }
        if(board[x][y]=='X'||board[x][y]=='C'){
            return;
        }
        if(board[x][y]=='O'){
            board[x][y]='C';
        }
        fillcolor(board,x-1,y);
        fillcolor(board,x,y-1);
        fillcolor(board,x+1,y);
        fillcolor(board,x,y+1);
        
    }
    void solve(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(i==0||j==0||i==board.size()-1||j==board[0].size()-1){
                    fillcolor(board,i,j);
                }
                }
            }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='C'){
                    board[i][j]='O';
                }
                else{
                    board[i][j]='X';
                }
            }
        }
        
    }
};
