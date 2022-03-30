class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
        vector<int>answer(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            while(s.size() && temperatures[i]>temperatures[s.top()]){
                answer[s.top()]=i-s.top();
                s.pop();
            }
            s.push(i);
        }
        return answer;
    }
};