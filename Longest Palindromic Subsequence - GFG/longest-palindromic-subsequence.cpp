// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string s1) {
        int x=s1.size();
        string s2=s1;
        reverse(s2.begin(),s2.end());
        int y=s2.size();
       int dp[x+1][y+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<x+1;i++){
            for(int j=1;j<y+1;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]+=1+dp[i-1][j-1];
                    
                }
                else{
                    dp[i][j]+=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[x][y];
    }
};

// { Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends