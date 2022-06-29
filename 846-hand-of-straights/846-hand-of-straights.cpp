class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;
        int x=hand.size()/groupSize,cnt=0;
        map<int,int>mp;      
        for(int i=0;i<hand.size();i++)
            mp[hand[i]]++;
        while(mp.size()>0){
            int mini=mp.begin()->first;
            for(int i=mini;i<mini+groupSize;i++){
                if(mp.find(i)==mp.end()) return false;
                int cnt=mp.find(i)->second;
                if(cnt==1) mp.erase(i);
                else
                    mp[i]--;
            }
           
        }
        
         return true;
    }         
      
};