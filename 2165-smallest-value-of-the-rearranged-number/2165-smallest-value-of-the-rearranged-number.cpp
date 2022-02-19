class Solution {
public:
    long long smallestNumber(long long nums) {
        vector<int>v;
        long long int ans=0;
        int i=0,flag=0;
        if(nums==0)
            return 0;
        if(nums<0)
            flag=1;
        nums=abs(nums);
        while(nums){
            v.push_back(nums%10);
            nums/=10;
        }
           
        if(flag==0){           
            sort(v.begin(),v.end());
        while(v[i]==0)
            i++;
            swap(v[0],v[i]);
            
        }
        else{
            
            sort(v.begin(),v.end(),greater<int>());
        
        }

        for(i=0;i<v.size();i++){
             ans=ans*10+v[i];
        }
        if(flag==1)
            return ans*(-1);
        else
        return ans;
    }
};