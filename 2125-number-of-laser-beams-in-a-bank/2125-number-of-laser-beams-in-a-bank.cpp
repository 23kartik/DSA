class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int cnt1=0,cnt2=0,flag=0,ans=0;
        for(int i=0;i<bank.size();i++){      
            for(int j=0;j<bank[0].size();j++){                
                if(bank[i][j]=='1'){
                 if(flag==0){
                    cnt1++;
                }   
                    else if(flag==1){
                         cnt2++;
                    }
                       
                }
                
            }
            if(cnt1!=0)
                flag=1;
            if(cnt1!=0&&cnt2!=0){
                ans+=(cnt1*cnt2);
                cnt1=cnt2,cnt2=0;
            }
            
        }
        return ans;
    }
};