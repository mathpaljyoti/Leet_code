class Solution {
public:
    int dp[51][101][51];

    int solve(int index , int biggest , int cost ,int n ,int k ,int m)
    {
        if(index == n)
            return cost == k;

        if( cost > k or k-cost > m - biggest or k-cost > n -index)
            return 0;

        if(dp[index][biggest][cost] != -1)
            return dp[index][biggest][cost];

        int res= 0;

        for(int i= 1 ; i<= m ; i++)
            res = (res + solve(index+1 , max(biggest , i) , i>biggest? cost + 1 : cost,n,k,m))%1000000007;

        return dp[index][biggest][cost] = res;
    }



    int numOfArrays(int n, int m, int k) {
        memset(dp , -1 , sizeof(dp));
        return solve(0, 0 , 0 ,n ,k ,m);
    }
};