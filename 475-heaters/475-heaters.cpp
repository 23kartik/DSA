class Solution {
public:
    bool isPossible(vector<int>& houses, vector<int>& heaters, int mid){
        int i=0,j=0;
        while(i<houses.size()){
            if(j==heaters.size())
                return false;
            int left=heaters[j]-mid;
            int right=heaters[j]+mid;
            if(houses[i]<left || houses[i]>right)
               j++;
            else
                i++;
        }
        return true;
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end()),sort(heaters.begin(),heaters.end());
        int low=0,high=1e9,ans=0;
        while(low<=high){
            int mid=(low+high)>>1;
            if(isPossible(houses,heaters,mid)){
                ans=mid;
                high=mid-1;
            }
            else 
                low=mid+1;
                
        }
        return ans;
    }
};