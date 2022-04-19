class Solution {
public:
    bool dfs(int i,int j,vector<vector<int>>&grid,int n,int m){
        if(i<0||j<0||i>=n||j>=m) return false;
        if(grid[i][j]==1) return true;
        grid[i][j]=1;
        
        int dfsup=dfs(i-1,j,grid,n,m);
        int dfsdown=dfs(i+1,j,grid,n,m);
        int dfsleft=dfs(i,j-1,grid,n,m);
        int dfsright=dfs(i,j+1,grid,n,m);
        return dfsup && dfsdown && dfsleft && dfsright;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size(),ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    if(dfs(i,j,grid,n,m)) ans++;
                }
            }
        }
        return ans;
    }
};