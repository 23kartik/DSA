class Solution {
public:
    void dfs(int src,vector<int>&visited,vector<int>adj[]){
        if(visited[src])
            return ;
        visited[src]=1;
        for(auto u:adj[src]){
            dfs(u,visited,adj);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<rooms[i].size();j++){
                adj[i].push_back(rooms[i][j]);
            }
        }
        vector<int>visited(n,0);
        dfs(0,visited,adj);
        for(int i=0;i<n;i++){         
            if(visited[i]==0){
                return false;
            }
        }
        return true;
    }
};