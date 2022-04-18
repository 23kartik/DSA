class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int>q;
        for(int i=0;i<n;i++){
          q.push(stones[i]);  
        }
        while(!q.empty()&&q.size()!=1){
            int x=q.top();
            q.pop();
            int y=q.top();
            q.pop();
            if(x>y){
                q.push(x-y);
            }
            else if(x<y)
                q.push(y-x);
        }
        if(q.size()==1)
            return q.top();
        return 0;
    }
};