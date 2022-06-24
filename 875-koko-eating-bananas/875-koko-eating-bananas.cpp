class Solution {
public:
    bool ispossible(int mid,vector<int>&piles,int h){
        int cnt=0;
        for(int i=0;i<piles.size();i++){
            cnt+=(piles[i]+mid-1)/mid;
            if(cnt>h)
                return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
    sort(piles.begin(),piles.end());
        int low=1,high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=(low+high)>>1;
            if(ispossible(mid,piles,h))
                high=mid-1;
            else
                low=mid+1;
        }
        return low;
    }
};