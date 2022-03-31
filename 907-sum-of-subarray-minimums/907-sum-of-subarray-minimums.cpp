class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int i,j,n;
        n=arr.size();
        int mod=1e9+7;
        vector<int>left(n),right(n);
        for(i=0;i<n;i++){
            left[i]=i;
            right[i]=n-i-1;
        }
        stack<int>s1,s2;
        for(i=0;i<n;i++){
            while(!s1.empty()&&arr[s1.top()]>arr[i]){
                right[s1.top()]=i-s1.top()-1;
                s1.pop();
            }
            s1.push(i);
        }
        for(i=n-1;i>=0;i--){
            while(!s2.empty()&&arr[s2.top()]>=arr[i]){
                left[s2.top()]=s2.top()-i-1;
                s2.pop();
            }
            s2.push(i);
        }
       
        long ans=0;
        for(i=0;i<n;i++){
            ans=(ans+(left[i]+1)*(right[i]+1)*(long)arr[i])%mod;
        }
        return ans;
    }
};