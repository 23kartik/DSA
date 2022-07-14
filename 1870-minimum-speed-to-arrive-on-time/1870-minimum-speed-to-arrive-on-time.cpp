class Solution {
public:
    bool possible(vector<int>& dist, double hour,int speed){
         double time=0;
        for(int i=0;i<dist.size()-1;i++){
           
            time+=(dist[i]*1.0)/(speed*1.0);
             time=(ceil(time));
            if(time>hour)
                return false;
        }
        
          time+=(dist[dist.size()-1]*1.0)/(speed*1.0);
        // if(speed==9)
        //     cout<<time;
        if(time>hour)
        return false;
        return true;
    }
    
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int sum=0,res=INT_MAX;
        if (hour <= (double)(dist.size() - 1))
            return -1;      
         int l=1,r=1e7,mid;
        while(l<r){
            mid=(l+r)/2;
            if(possible(dist,hour,mid)){
               
                r=mid;
            }
            else
                l=mid+1;
        }
       
        return l;
    }
};