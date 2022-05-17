class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int cnt=1,i=0,balloon=points[0][1];
        
       while(i<points.size()-1){
           if(balloon>=points[i+1][0]&&balloon<=points[i+1][1]){
               i++;
           }  
           else if(balloon>points[i+1][0]&&balloon>points[i+1][1]){
               balloon=points[i+1][1];
               i++;
           }
           else{
               balloon=points[i+1][1];
               cnt++;
               
           }
       }
        return cnt;
    }
};