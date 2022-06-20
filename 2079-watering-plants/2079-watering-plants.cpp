class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans=1,temp;
        temp=capacity;
        capacity-=plants[0];
        for(int i=1;i<plants.size();i++){
            
            if(capacity>=plants[i]){
                capacity-=plants[i];
                ans++;
            }
            else{
                ans+=(i+1)*2-1;
                capacity=temp-plants[i];
            }
        }
        return ans;
    }
};