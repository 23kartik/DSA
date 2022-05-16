class Solution {
public:
    bool ispossible(int mid,int days,vector<int>&weights){
        int weight=0,cnt=1;
       for(int i=0;i<weights.size();i++){
           if(weight+weights[i]<=mid)
           weight+=weights[i];
          
           else{         
               weight=weights[i];             
               cnt++;                
           }
       }
       
        if(cnt<=days)
            return true;
        else{
           
             return false;
        }
           
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int sum=0,ans=0;
        for(int i=0;i<weights.size();i++)
            sum+=weights[i];
        int low=*max_element(weights.begin(),weights.end()),high=sum;
        while(low<=high){
            int mid=(low+high)>>1;
            
            if(ispossible(mid,days,weights)){           
                high=mid-1;
            }
            else
                low=mid+1;
           
        }
        return low;
    }
};