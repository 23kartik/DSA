class Solution {
public:
    bool dfs(int start,int end,vector<bool>&visited,map<int, vector<int>>& mp){
        visited[start]=true;
        if(start==end)
            return true;
        for(int &u : mp[start]){
            if(visited[u]==false&&dfs(u,end,visited,mp))
                return true;
        }
        return false;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<bool>visited(n+1,false);
        map<int, vector<int>> mp;
        for(int i=0;i<n;i++){
            int u=edges[i][0];
            int v=edges[i][1];
            fill(visited.begin(),visited.end(),false);
 if(mp.find(u)!=mp.end()&&mp.find(v)!=mp.end()&&dfs(u,v,visited,mp))
                return edges[i];
            mp[u].push_back(v);
            mp[v].push_back(u);
        }
        return {};
    }
};