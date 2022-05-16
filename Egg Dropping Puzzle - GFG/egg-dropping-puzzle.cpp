// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int n, int k) 
    {
        vector<vector<int>>dp(n+1,vector<int>(k+1,0));
        for(int i=0;i<n+1;i++){
            dp[i][0]=0;
            dp[i][1]=1;
        }
        for(int i=0;i<k+1;i++){
            dp[0][i]=0;
            dp[1][i]=i;
        }
        for(int i=2;i<n+1;i++){
            for(int j=2;j<k+1;j++){
                int low=1,high=j,temp=0,ans=1e5;
                while(low<=high){
                    int mid=(low+high)>>1;
                    int left=dp[i-1][mid-1];
                    int right=dp[i][j-mid];
                    temp=1+max(left,right);
                    if(left<right)
                    low=mid+1;
                    else
                    high=mid-1;
                    ans=min(ans,temp);
                }
                dp[i][j]=ans;
            }
        }
        return dp[n][k];
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends