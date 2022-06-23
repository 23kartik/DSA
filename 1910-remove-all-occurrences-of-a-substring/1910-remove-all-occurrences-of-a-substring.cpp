class Solution {
public:
    bool ispresent(stack<char>st,string part){
        int j=part.size()-1;
        while(j>=0&&st.top()==part[j]){
            st.pop();
            j--;
        }
        return ( j == -1 );
    }
    string removeOccurrences(string s, string part) {
        int n=s.size(),m=part.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            st.push(s[i]);
            if(st.size()>=m){
               if(ispresent(st,part)){
                   int temp=m;
                   while(temp--){
                       st.pop();
                   }
               } 
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};