class Solution {
public:
    int maxArea(vector<int>& height) {
        int res=0;
        int i=0,j=height.size()-1;
        while(i<j){
            int ht=min(height[i],height[j]);
            res=max(res,(j-i)*ht);
            while(height[i]<=ht && i<j)
                i++;
            while(height[j]<=ht && i<j)
                j--;
        }
            return res;
    }
};