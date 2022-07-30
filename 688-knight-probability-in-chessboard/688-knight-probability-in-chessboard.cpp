class Solution {
public:
    double knightProbability(int n, int k, int row, int col) {
        vector<vector<double>>curr(n,vector<double>(n,0.0));
        curr[row][col]=1.0;
        int dx[] = {-2,-1,1,2,2,1,-1,-2};
        int dy[] = {1,2,2,1,-1,-2,-2,-1};
        while(k--){
            vector<vector<double>>next(n,vector<double>(n,0.0));
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(curr[i][j]!=0){
                        for(int a=0;a<8;a++){
                            int cr=i+dx[a];
                            int cc=j+dy[a];
                            if ( cr>=0 && cr<n && cc>=0 && cc<n) 
                            next[cr][cc]+=curr[i][j]/8.0;
                        }
                    }
                }
            }
            curr=next;
        }
        double ans=0.0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans+=curr[i][j];
            }
        }
        return ans;
    }
};