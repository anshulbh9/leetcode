class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size()==0){
            return 0;
        }
        int ans=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(i==0||j==0||matrix[i][j]=='0'){
                    if(matrix[i][j]=='1'){
                         if(ans==0){
                             ans=1;
                         }
                        continue;
                    }
                }
                    else {
                        if(matrix[i-1][j-1]!='0'&&matrix[i][j-1]!='0'&&matrix[i-1][j]!='0'){
                            char m=min(matrix[i-1][j-1],min(matrix[i][j-1],matrix[i-1][j]));
                            char x=m-'0'+'1';
                            cout<<x;
                            matrix[i][j]=max(matrix[i][j],x);
                            cout<<matrix[i][j];
                            }
                    }
                  ans=max(ans,matrix[i][j]-'0');
                }
              
            
        }
        return ans*ans;
    }
};
