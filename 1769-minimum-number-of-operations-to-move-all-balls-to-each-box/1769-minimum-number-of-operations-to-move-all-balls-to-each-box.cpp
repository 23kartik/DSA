class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans,ones;
        int op=0;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1')
                ones.push_back(i);
        }
        for(int i=0;i<boxes.size();i++){
            op=0;
            for(auto u:ones){
                op+=abs(i-u);
            }
            ans.push_back(op);
        }
        return ans;
    }
};