class Solution {
    
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int x = 1;
        int n = dist.size();
        vector<pair<int,int>>vp;
        vector<int> ans;
        for(int i = 0;i<n;i++){
            ans.push_back(ceil((double)dist[i]/speed[i]));
        }
        sort(ans.begin(), ans.end());
        for(int i = 0;i<n;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        for(int i = 0;i<n-1;i++){
            if(ans[i]==ans[i+1]&&x>=ans[i+1]){
                return x;
            }
            x++;
        }
        return x;
    }
};