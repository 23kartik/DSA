class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& tiles, int carpetLen) {
         int n=tiles.size();
        sort(tiles.begin(),tiles.end());
        vector<int>pref(n);
       
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            pref[i]=tiles[i][1]-tiles[i][0]+1;
            if(i>0){
                pref[i]+=pref[i-1];
            }
        }
        for(int i=0;i<n;i++){
            int leftend=tiles[i][0],rightend=tiles[i][0]+carpetLen-1;
           int l=i,r=n-1,left=i,right=i-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(tiles[mid][1]<=rightend){
                   
                    right=mid;
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            int curr=0;
            if(right!=i-1){
               
                curr+=pref[right];
                if(left>0){
                    curr-=pref[left-1];
                }
            }
            if(right+1<n){
                curr+=max(0,rightend-tiles[right+1][0]+1);
            }
            ans=max(ans,curr);
            
        }
        return ans;
    }
};