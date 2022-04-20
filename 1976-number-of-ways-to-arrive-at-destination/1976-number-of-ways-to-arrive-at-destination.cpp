class Solution {
public:
    void dijkstra(int src,vector<pair<long long int,long long int>>adj[],vector<long long int>&dist,vector<long long int>&dp){
        long long int mod=1e9+7;
        priority_queue<pair<long long int,long long int>>q;
        q.push({0,0});        
        while(!q.empty()){
            long long int wt=-q.top().first;
            long long int node=q.top().second;
            q.pop();
            if(dist[node]<wt) continue;
            
            for(auto u:adj[node]){
                long long int child=u.first;
                
                long long int wtchild=u.second;
               
                if(wt+wtchild==dist[child])
                    dp[child]=(dp[child]+dp[node])%mod;
                
                if( wt+ wtchild < dist[child]) {
                    dp[child]=dp[node]%mod;
                    
                    dist[child] = wt + wtchild; 
                    
                    q.push({-dist[child], child});
                }
            }
        }
        
    }
    int countPaths(int n, vector<vector<int>>& roads) {
        long long int INF=1e15;
        int m=roads.size();
        vector<long long int>dist(n,INF),dp(n,0);
        vector<pair<long long int,long long int>>adj[n];
        for(int i=0;i<roads.size();i++){
            adj[roads[i][0]].push_back({roads[i][1],roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0],roads[i][2]});
        }
        
        
        dist[0]=0;
        dp[0]=1;
        dijkstra(0,adj,dist,dp);
      
        return dp[n-1];
    }
};