class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int m=edges.size();
        int visited[m+2];
        memset(visited,0,sizeof(visited));
        for(int i=0;i<edges.size();i++){
            visited[edges[i][1]]++;
            visited[edges[i][0]]++;
        }
       for(int i=1;i<m+2;i++){
            if(visited[i]==edges.size())
                return i;
        } 
        return 0;
    }
};