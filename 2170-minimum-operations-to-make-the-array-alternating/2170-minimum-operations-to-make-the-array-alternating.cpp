class Solution {
public:
    int minimumOperations(vector<int>& nums) {
      int maxi = *max_element (nums.begin(), nums.end());
        int ans=0;
        int arr[maxi+1][2];
        memset (arr,0,sizeof(arr));
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i%2==0)
                arr[nums[i]][0]++;
            else
                arr[nums[i]][1]++;
        }
        int j=0,k=0;
        for(int i=0;i<=maxi;i++){
            ans=max(ans,max(arr[i][0]+k,arr[i][1]+j));
            j=max(j,arr[i][0]);
            k=max(k,arr[i][1]);
        }
        return n-ans;
    }
};