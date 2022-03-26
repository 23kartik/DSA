class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
          
    vector<int> count_Tops(7),count_Bottoms(7),Same(7);
    int n = tops.size();
    
    for(int i=0;i<n;++i)
    {
        count_Tops[tops[i]]++;
        count_Bottoms[bottoms[i]]++;
        if(tops[i] == bottoms[i])
        {
            Same[tops[i]]++;
        }
    }

    for(int i=1;i<7;++i)
        
        if(count_Tops[i] + count_Bottoms[i] - Same[i] == n)
        {
            return n - max(count_Tops[i],count_Bottoms[i]);
        }
    return -1;
    }
};