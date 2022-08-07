class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>vec;
        vector<int>v;
        int i,n,j,temp;
        n=intervals.size();
         if(intervals.size()<=1) return intervals;
            sort(intervals.begin(),intervals.end());
                    
        for(i=0;i<n;i++){
            
            if(v.empty()){
                v.push_back(intervals[0][0]);
                temp=intervals[i][1];
            }
            if(intervals[i][0]>temp){
                v.push_back(temp);
                vec.push_back(v);
                v.clear();
                v.push_back(intervals[i][0]);
                temp=intervals[i][1];
            }
            else if(intervals[i][0]<=temp&&intervals[i][1]>=temp){
                temp=intervals[i][1];
            }
            if(i==n-1){
                v.push_back(temp);
                vec.push_back(v);
            }
        }
        return vec;
    }
};