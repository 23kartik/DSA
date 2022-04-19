class Solution {
public:
     void dfs(int i,int j,int &cnt,vector<vector<int>>&grid,int n,int m){
        if(i<0||j<0||i>=n||j>=m) return ;
        if(grid[i][j]==0) return;
        if(grid[i][j]==1){
            cnt++;        
            grid[i][j]=0;
            dfs(i-1,j,cnt,grid,n,m);
            dfs(i+1,j,cnt,grid,n,m);
            dfs(i,j-1,cnt,grid,n,m);
            dfs(i,j+1,cnt,grid,n,m);
        } 
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        
        int cnt=0,cnt1=0;
         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                  cnt1+=grid[i][j];
            }
         }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j]==1&&(i==0||j==0||i==n-1||j==m-1)){
                    dfs(i,j,cnt,grid,n,m);
                   
                }
            }
        }
     
        return cnt1-cnt;
        
    }
};