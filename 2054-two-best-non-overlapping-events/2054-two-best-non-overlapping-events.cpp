class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        int maxsum=0,maxval=0;
       priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        for(auto u:events){
            while(!pq.empty()&&pq.top().first<u[0]){
                maxval=max(maxval,pq.top().second);
                pq.pop();
            }
             maxsum=max(maxsum,maxval+u[2]);
            pq.push({u[1], u[2]});
        }
        return maxsum;
    }
};