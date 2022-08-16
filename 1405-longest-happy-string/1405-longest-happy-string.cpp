class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>pq;
        char prev1='@',prev2='@';
       if(a!=0) pq.push({a,'a'});
       if(b!=0) pq.push({b,'b'});
       if(c!=0) pq.push({c,'c'});
        string res="";
        while(!pq.empty()){
            auto [cnt1,ch1]=pq.top();pq.pop();
            if(ch1==prev1&&ch1==prev2){
                  if(pq.empty()) return res;
                auto[cnt2,ch2]=pq.top();pq.pop();
                res+=ch2;
                prev1=prev2;
                prev2=ch2;
                 pq.push({cnt1,ch1});
                cnt2--;
                if(cnt2>0) pq.push({cnt2,ch2});
               
            }
            else{
                prev1=prev2;
                prev2=ch1;
                res+=ch1;
                cnt1--;
                if(cnt1>0) pq.push({cnt1,ch1});
            }
        }
        return res;
    }
};