class Solution {
public:
    bool isValid(string s) {
       stack<char>st; 
        for(int i=0;i<s.size();i++){
            if(s[i]=='c'){
               
                if(st.empty()){
                    return false;
                }
                else if(st.top()!='b')
                    return false;
                else if(st.top()=='b'){
                  
                    st.pop();
                     
                    if(st.empty()||st.top()!='a'){
                      
                        return false;
                    }
                       
                    else if(st.top()=='a'){
                         
                         st.pop();
                    }
                       
                }
            }
            else
                st.push(s[i]);
        }
        if(st.empty())
            return true;
        else 
            return false;
    }
};