class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
		if (grid[0][0] != 0 || grid[n - 1][n - 1] != 0)
		{
			return -1;
		}
          int dx[8]={1,0,-1,0,1,-1,-1,1};
         int dy[8]={0,1,0,-1,1,-1,1,-1};
        int ans=0;
        queue<pair<int,int>>q;
        q.push({0,0});        
       grid[0][0]=1;
            while(!q.empty()){
                ans++;          
                int size=q.size();
                while(size--){
                    int x=q.front().first;
                    int y=q.front().second;
                    q.pop();
                    if(x==n-1&&y==n-1)
                        return ans;
                    for(int i=0;i<8;i++){
                        int x1=x+dx[i];
                        int y1=y+dy[i];
                        if(x1>=0&&y1>=0&&x1<n&&y1<n&&grid[x1][y1]==0){
                            grid[x1][y1]=1;
                            q.push({x1,y1});
                        }
                    }
             }
            }
        return -1;
    }
};