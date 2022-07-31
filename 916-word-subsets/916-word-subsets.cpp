class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int>freq(26,0);
      int i;
       for(auto u:words2){
           vector<int>temp(26,0);
           for(i=0;i<u.size();i++){
               temp[u[i]-'a']++;
           }
           for(i=0;i<26;i++)
               freq[i]=max(freq[i],temp[i]);
           
       }
       
        vector<string>subsets;
         for(auto u:words1){
             vector<int>count(26,0);
      
           for(i=0;i<u.size();i++){
               count[u[i]-'a']++;
           }
            
            for(i=0;i<26;i++){
                if(freq[i]>count[i]){          
                        break; 
                    }                      
                }
             if(i==26)
             subsets.push_back(u);
            }
             
       
        return subsets;
    }
};