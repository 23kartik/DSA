class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        sort(candies.begin(),candies.end());
        long long int start,end;
        long long int ans=0,child=0;  
        start=1;
        end=candies[candies.size()-1];
        while(start<=end){
            int mid=(start+end)/2;
            child=0;
            for(int i=0;i<candies.size();i++){
                child+=candies[i]/mid;
            }
            if(child>=k){
                ans=mid;
                start= mid+1;
                
            }
            else
                end=mid-1;
            
        }
        return ans;
    }
};