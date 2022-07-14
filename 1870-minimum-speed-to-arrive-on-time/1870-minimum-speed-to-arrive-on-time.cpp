class Solution {
public:
    bool possible(vector<int>& dist, double hour,int speed){
         double time=0;
        for(int i=0;i<dist.size();i++){     
             time=(ceil(time));
            time+=(dist[i]*1.0)/(speed*1.0);
           
            if(time>hour)
                return false;
        }        
         
   
     
        return true;
    }
    
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int sum=0,res=INT_MAX;            
         int l=1,r=1e7,mid;
        while(l<=r){
            mid=(l+r)/2;
            if(possible(dist,hour,mid)){
               res=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }   
         if(res==INT_MAX)
            return -1;
        return res;
    }
};