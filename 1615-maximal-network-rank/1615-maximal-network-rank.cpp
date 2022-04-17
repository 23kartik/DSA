class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int>degree(n,0);
        int adjmat[n][n];
        memset(adjmat,0,sizeof(adjmat));
        for(int i=0;i<roads.size();i++){
            degree[roads[i][0]]++,degree[roads[i][1]]++;
            adjmat[roads[i][0]][roads[i][1]]=1;
            adjmat[roads[i][1]][roads[i][0]]=1;
        }
        int ans=0;
       for (int i = 0; i < n; i++) {
	    for (int j = i + 1; j < n; j++) {
		ans = max(ans, degree[i] + degree[j] - adjmat[i][j] );  
	}
}
        
           return ans;
    }
};