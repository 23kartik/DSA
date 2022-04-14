class Solution {
public:
    void dfs(int src,int dest,vector<vector<int>>& graph,vector<vector<int>>&ans,vector<int>temp){
        temp.push_back(src);
        if(src==dest){
            ans.push_back(temp); 
            return;
        } 
        for(auto u:graph[src]){        
            dfs(u,dest,graph,ans,temp);
        } 
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>adj[n],visited(n,0);
        vector<vector<int>>ans;
        vector<int>temp;
        
       
       dfs(0,n-1,graph,ans,temp);
        return ans;
    }
};