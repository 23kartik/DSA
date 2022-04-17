class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        const int inf = 1e9;
        vector<int> dist(n + 1, inf),visited(n+1,0);
        vector<pair<int,int>>adj[n+1];
        for(int i=0;i<times.size();i++){
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        } 
        priority_queue<pair<int,int>>q;
        q.push({0,k});
        dist[k]=0;      
        while(!q.empty()){            
            int a=q.top().second;
            q.pop();
            if(visited[a])
                continue;
            visited[a]=1;
            for(auto u:adj[a]){
                int b=u.first,w=u.second;
                
                if(dist[a]+w<dist[b]){
                    dist[b] =dist[a]+w;
                 q.push({-dist[b],b});
                     
                }            
            }
        }
       int ans = 0;
        for(int i=1;i<dist.size();i++){
            ans = max(ans, dist[i]);
        }
        if(ans==1e9) return -1;
        return ans;
    }
};