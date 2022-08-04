class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
          if(points.size()<=2) return points.size();
      int ans=0;
        for(int i=0;i<points.size();i++){
              unordered_map<double,int>mp;
       
           for(int j=i+1;j<points.size();j++){             
                if((points[j][0]-points[i][0])==0){
                    mp[INT_MAX]++;
                    ans=max(ans,mp[INT_MAX]);
                }
                else{
                    mp[((points[j][1]-points[i][1])*(1.0))/((points[j][0]-points[i][0])*(1.0))]++;
                    ans=max(ans,mp[((points[j][1]-points[i][1])*(1.0))/((points[j][0]-points[i][0])*(1.0))]);
                }
            
               
            
        }
        }
        
      
        return ans+1;
    }
};