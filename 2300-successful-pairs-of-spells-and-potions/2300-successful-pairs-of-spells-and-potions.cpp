class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>ans;
        int cnt=0,j=0;
        sort(potions.begin(),potions.end());
       
        for(int i=0;i<spells.size();i++){   
            int low=0,high=potions.size()-1;
            while(low<=high){        
                int mid=(low+high)>>1;
               if((long long int)spells[i]*(long long int)potions[mid]<success){
                   low=mid+1;
                   
               }   
                else
                    high=mid-1;
                    
            }
            ans.push_back(potions.size()-low);
           
        }
        return ans;
    }
};