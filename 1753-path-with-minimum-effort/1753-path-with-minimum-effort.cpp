class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visi(n,vector<int>(m,1e7));
        priority_queue<pair<int,pair<int,int>>> q;
        vector<pair<int,int>> dirs = {{1,0},{0,1},{-1,0},{0,-1}};

        q.push({0,{0,0}});
        visi[0][0]=0;
        while(!q.empty()){
            auto t = q.top();

            if(t.second.first==n-1&&t.second.second==m-1)return -1*t.first;

            q.pop();
            for(auto& dir:dirs){
                int nx = t.second.first+dir.first;
                int ny = t.second.second + dir.second;
                if(nx<0 or ny<0 or nx>=n or ny>=m)continue;
                int val = -1*max(-1*t.first,abs(grid[nx][ny]-grid[t.second.first][t.second.second]));
                if(-1*val<visi[nx][ny]){
                    q.push({val,{nx,ny}});
                    visi[nx][ny]=-val;
                }
                
            }
        }
        return -1;
    }
};