class Solution {
public:
    int minFlips(string target) {
        int flag=0,cnt=0;
       
        for(int i=0;i<target.size()-1;i++){
            if(target[i]=='0'&&flag==0) continue;
            
               else if(target[i]=='1'&&target[i+1]=='0'||target[i]=='0'&&target[i+1]=='1'){
                cnt++;
                flag=1;
         
            }    
        }
         for(int i=0;i<target.size()-1;i++){
            if(target[i]=='1'){
                flag=1;
                break;
            }           
        }
        if(flag==0)
            return 0;
        return cnt+1;
        
    }
};