class Solution {
public:
    void dfs(int i,bool &result,vector<int>&color,vector<int>adj[]){
        if(color[i]==0)
            color[i]=1;
        for(auto u:adj[i]){
            if(color[u]==0){
            color[u]=-color[i];
            dfs(u,result,color,adj);
            }
            if(color[i]==color[u]){
                result=false;
                return;
            }
  
        }
         
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int>adj[n+1];
        for(int i=0;i<dislikes.size();i++){
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
             adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        bool result=true;
        
        vector<int>color(n+1,0);
        for(int i=1;i<=n;i++){
            if(color[i]==0){
              dfs(i,result,color,adj);      
            }
        }
        return result;
    }
};