class Solution {
public:
    void dfs(int src,vector<int>adj[],vector<int>&visited){
        if(visited[src])
            return;
        visited[src]=1;
        for(auto u:adj[src]){
            dfs(u,adj,visited);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(),cnt=0;
        vector<int>adj[n],visited(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1)
                    adj[i].push_back(j);
            }
        }
        for(int i=0;i<n;i++){
            if(visited[i]==0){
               cnt++;
                dfs(i,adj,visited);
            }
        }
        return cnt;
    }
};