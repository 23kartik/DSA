class Solution {
public:
    void dfs(int s,vector<int>&vis,vector<int>adj[]){
        if(vis[s])
            return ;
        vis[s]=1;
        for(auto u:adj[s]){
            dfs(u,vis,adj);
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>adj[n];
        vector<int>visited(n,0);
        int m=edges.size();
        for(int i=0;i<m;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        dfs(source,visited,adj);
        if(visited[destination])
            return true;
        return false;
    }
};