class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        
        long long sum=0,ans=INT_MIN,total_sum=0,flag=1,mod=1e9+7;
        for(int i=0;i<arr.size();i++){
            total_sum+=arr[i];
            
            if(arr[i]>0){
                flag=0;
            }
        }
        for(int i=0;i<arr.size();i++){
            sum+=arr[i]%mod;
            if(sum<0)
                sum=0;
            ans=max(ans,sum);
        }
 
        // if(total_sum>0)
        //     return (total_sum*k)%mod;
      if(flag) return 0;
        long long int maxi1=arr[0],maxi2=arr[arr.size()-1], s1 = arr[0], s2 = arr[arr.size()-1];
        for(int i=1;i<arr.size();i++){
            s1+= arr[i];
            s1%=mod;
            maxi1=max(maxi1,s1);
            
        }
        for(int i=arr.size()-2;i>=0;i--){
            s2+= arr[i];
            s2%= mod;
            maxi2=max(maxi2,s2);
        }
        if(k==1)
            return ans%mod;
      if(total_sum>0){
       long long ans2 = max(ans,(maxi1+maxi2)+(((total_sum))*((k-2)))); 
        return ans2%mod;
      }
      return max(ans%mod,(maxi1+maxi2)%mod); 
    }
};