// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
bool allocationispossible(int arr[], int n,int barrier,int student){
    int allocatedstudent=1,pages=0;
    for(int i=0;i<n;i++)
{
    if(arr[i]>barrier) return false;
    if(pages+arr[i]>barrier){
        allocatedstudent++;
        pages=arr[i];
    }
    else
    pages+=arr[i];
}
if(allocatedstudent>student) 
return false;
else
return true;

}
    int findPages(int arr[], int n, int m) 
    {
        int sum=0,res=0;
        for(int i=0;i<n;i++)
        sum+=arr[i];
        int low=arr[0],high=sum;
        while(low<=high){
            int mid=(low+high)/2;
            if(allocationispossible(arr,n,mid,m)){
                res=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends