// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    int wordBreak(string A, vector<string> &B) {
        int dp[A.size()+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=0;i<=A.size();i++){
            if(dp[i]==1){
               for(auto u:B){
            string s=A.substr(i,u.size());
            if(s==u){
                dp[i+u.size()]=1;
        }
        } 
        }
        }
        return dp[A.size()];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends