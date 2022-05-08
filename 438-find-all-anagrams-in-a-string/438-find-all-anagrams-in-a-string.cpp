class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int>pmp;
        vector<int>res;
        for(int i=0;i<p.size();i++)
            pmp[p[i]]++;
        map<char,int>smp;
        int i,j,flag=0;
        i=0,j=0;
       while(i<s.size()&&j<s.size()){
           if(j==p.size()){
               flag=1;
           }
           if(flag==0){
               smp[s[j]]++;
               j++;
           }
           else{
               if(smp[s[i]] == 1) smp.erase(s[i]);
               else smp[s[i]]--;
                smp[s[j]]++;
               i++,j++;
           }
          
           if(smp==pmp)
               res.push_back(i);
       }
        
        return res;
    }
};