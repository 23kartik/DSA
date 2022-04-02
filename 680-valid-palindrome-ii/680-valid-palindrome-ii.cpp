class Solution {
public:
    bool validPalindrome(string s) {
      int i = 0;
        int j = s.size() - 1;
        int cnt = 0;
        
        while(i < j){
            if(s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                cnt++;
               i++;     
            }
			
            if(cnt > 1)
                break;
        }
        
        i = 0;
        j = s.size() - 1;
        int cnt1 = 0;
        
        while(i < j){
            if(s[i] == s[j])
            {
				
                i++;
                j--;  
            }
            else
            {
                cnt1++;
                j--;  
            }
		
            if(cnt1 > 1)
                break;
               
        }
        
        if(cnt == 1 || cnt1 == 1)   
            return true;
        if(cnt == 0 || cnt1 == 0)  
            return true;
        
        return false;
    }
};