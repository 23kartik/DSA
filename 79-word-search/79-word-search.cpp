class Solution {
public:
    bool search(int i,int j,int k,string temp,vector<vector<int>> &visited,vector<vector<char>>& board, string word){
        if(temp.size()==word.size()){
            if(temp==word)
                return true;
            return false;
        }
        if(i>=0 && i<board.size() && j>=0 && j<board[0].size()){
            if(visited[i][j])
                return false;
            if(board[i][j]!=word[k])
                return false;
            temp+=board[i][j];
            visited[i][j]=1;
            bool a=search(i,j+1,k+1,temp,visited,board,word);     
            bool b=search(i+1,j,k+1,temp,visited,board,word);
            bool c=search(i,j-1,k+1,temp,visited,board,word);
            bool d=search(i-1,j,k+1,temp,visited,board,word);    
            visited[i][j]=0;
            if(a||b||c||d)
                return true;
        }
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size(),n=board[0].size();
        vector<vector<int>> visited(m,vector<int> (n,0));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    if(search(i,j,0,"",visited,board,word))
                        return true;
                }
            }
        }
        return false;
    }
};