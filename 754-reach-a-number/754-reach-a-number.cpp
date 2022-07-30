class Solution {
public:
    int reachNumber(int target) {
        int sum=0,ans=0;
        target=abs(target);
        while(sum<target||(sum-target)%2!=0){
            ans++;
            sum+=ans;
        }
        return ans;
    }
};