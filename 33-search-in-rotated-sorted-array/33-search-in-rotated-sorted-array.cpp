class Solution {
public:
    int pivot(vector<int>& nums,int start,int end,int n){
         
        while(start<=end){
            if (nums[start] <= nums[end])
		{
			return start;
		}
            int mid=(start+end)/2;
            int prev=(mid-1+n)%n;
            int next=(mid+1)%n;
                if(nums[mid]<nums[prev] && nums[mid]<nums[end])
                    return mid;
            else if(nums[mid]<=nums[end])
                end =mid-1;
            else if(nums[mid]>=nums[start])
                start=mid+1;
        }
        return 0;        
    }
    int bs(vector<int>& nums,int start,int end,int target){
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        return -1;
        
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int index=pivot(nums,0,n-1,n);
  
        int ans1=bs(nums,index+1,n-1,target);
        int ans2=bs(nums,0,index-1,target);
        if(nums[index]==target)
            return index;
       else if(ans1>=0&&nums[ans1]==target ) 
           return ans1;
        else if(ans2>=0&&nums[ans2]==target)
            return ans2;
        return -1;
            
    }
};