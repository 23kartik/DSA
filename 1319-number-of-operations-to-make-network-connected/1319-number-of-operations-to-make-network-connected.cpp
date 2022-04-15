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
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int>adj[n];
        int cnt=0;
        for(int i=0;i<connections.size();i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        vector<int>visited(n,0);
       
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                cnt++;
                dfs(i,adj,visited);
                
            }
        }
        int edges=connections.size();
        int extraedges=edges-((n-1)-(cnt-1));
        if(edges<n-1)
            return -1;
       
        if(extraedges<cnt-1)
            return -1;
   
        return cnt-1;
    }
};