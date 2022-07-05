class Solution {
public:
    void dfs(int i,int j,int &cnt,vector<vector<int>>&grid){
        if(i<0||j<0||i>grid.size()-1||j>grid[0].size()-1||grid[i][j]==0) return;
        cnt++;
        grid[i][j]=0;
         for(int c=0;c<grid[0].size();c++){
                if(grid[i][c]==1)dfs(i,c,cnt,grid);
            }
            for(int r=0;r<grid.size();r++){
                if(grid[r][j]==1)dfs(r,j,cnt,grid);
            }
    }
    int countServers(vector<vector<int>>& grid) {
      int temp=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int  j=0;j<m;j++){
                if(grid[i][j]){
                    int cnt=0;
                     dfs(i,j,cnt,grid);
                    if(cnt>1)
                        temp+=cnt;
                }
            }
        }
        return temp;
    }
};