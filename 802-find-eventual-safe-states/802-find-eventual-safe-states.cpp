class Solution {
public:
    bool dfs(int node,vector<vector<int>>&graph,vector<int>&visited){
        visited[node]=1;
        for(auto u:graph[node]){
             if(visited[u]==0&&dfs(u,graph,visited)||visited[u]==1)
                 return true;
        }         
        visited[node]=2;  //no cycle
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans,visited(graph.size());
        for(int i=0;i<graph.size();i++){
            if(visited[i]==2||!dfs(i,graph,visited))
                ans.push_back(i);
        }
        return ans;
    }
};