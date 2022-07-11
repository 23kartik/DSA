class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int i=0,j=m-1;
        while(i>=0&&i<n&&j>=0&&j<m){
            int p=(i-1<0)?-1:mat[i-1][j];
            int q=(i+1==n)?-1:mat[i+1][j];
            int r=(j-1<0)?-1:mat[i][j-1];
            int s=(j+1==m)?-1:mat[i][j+1];
            
          
            if(mat[i][j]>p&&mat[i][j]>q&&mat[i][j]>r&&mat[i][j]>s)
                return {i,j};
                  int maxi=max({p,q,r,s});
             if(p==maxi){
               i--; 
            }
            else if(q==maxi){
                i++;
            }
            else if(r==maxi){
                j--;
            }
            else if(s==maxi){
               j++; 
            }
        }
        return {};
    }
};