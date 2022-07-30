class Solution {
public:
    void helper(string tiles,int level,int &cnt){
        cnt++;
        for(int i=level;i<tiles.size();i++){
            if(i!=level&&tiles[i]==tiles[level]) continue;
            swap(tiles[i],tiles[level]);
            helper(tiles,level+1,cnt);
        }
    }
    int numTilePossibilities(string tiles) {
        sort(tiles.begin(),tiles.end());
        int cnt=-1;
        helper(tiles,0,cnt);
        return cnt;
    }
};