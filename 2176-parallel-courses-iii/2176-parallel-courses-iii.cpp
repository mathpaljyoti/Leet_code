class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int>adj[n];
        vector<int>indegree(n,0);
        for(auto relation:relations){
            int u = relation[0]-1;
            int v = relation[1]-1;
            adj[u].push_back(v);
            indegree[v]++;
        }
        queue<int>q;
        vector<int>maxTime(n,0);
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                maxTime[i] = time[i];
                q.push(i);
            }
        }
        while(q.empty()==false){
            int size = q.size();
            for(int i=0;i<size;i++){
                auto node = q.front();q.pop();
                for(int x:adj[node]){
                    maxTime[x] = max(maxTime[x],time[x]+maxTime[node]);
                    indegree[x]--;
                    if(indegree[x]==0)q.push(x);
                }
            }
        }
        int maxi = 0;
        for(int i=0;i<n;i++){
            maxi = max(maxi,maxTime[i]);
        }
        return maxi ;
    }
};