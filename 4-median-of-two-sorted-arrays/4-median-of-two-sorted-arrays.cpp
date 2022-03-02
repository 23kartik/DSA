class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3;
        for(auto i:nums1)
            nums3.push_back(i);
        for(auto i:nums2)
            nums3.push_back(i);
        sort(nums3.begin(),nums3.end());
        double ans ;

         if(nums3.size()%2==0)
             ans=(nums3[(nums3.size()-1)/2]+nums3[(nums3.size()-1)/2+1])/2.0;
        else
        ans=nums3[(nums3.size()-1)/2.0];
        return ans/1.0;
    }
};