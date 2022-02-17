class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long ans=LLONG_MAX, sum=0,n=beans.size();
        sort(beans.begin(),beans.end());
        for(int i=0;i<n;i++)
            sum+=beans[i];
        for(int i=0;i<n;i++){
            ans=min(ans,sum-((n-i)*beans[i]));
        }
        return  ans;
    }
};