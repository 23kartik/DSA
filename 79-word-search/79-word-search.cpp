class Solution {
public:
    bool search(int i,int j,vector<vector<char>>& board,string word,int index){
        if(index==word.size())   return true; 
        if(i<0||i>board.size()-1||j<0||j>board[0].size()-1)  return false;
        if(board[i][j]!=word[index]) return false;
        board[i][j]='0';
        bool newSearch=search(i+1,j,board,word,index+1)||search(i-1,j,board,word,index+1)||search(i,j+1,board,word,index+1)||search(i,j-1,board,word,index+1);
        board[i][j]=word[index];
        return newSearch;
        
        
    }
    bool exist(vector<vector<char>>& board, string word) {
      
            for(int i=0;i<board.size();i++){
                for(int j=0;j<board[0].size();j++){
                     if(search(i,j,board,word,0))
                         return true;
                }
            }
           return false;
    }
};