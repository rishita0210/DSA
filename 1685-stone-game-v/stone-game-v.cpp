class Solution {
public:

    int solve(int start , int end ,vector<int>& stoneValue, vector<vector<int>>&dp){
        if(start>=end) return 0;
        int l=0;
        int r=0;

        if(dp[start][end]!=-1) return dp[start][end];

        for(int i=start;i<=end;i++){
            r+=stoneValue[i];
        }
        int ans=0;
        for(int i=start ;i<end;i++){
            l+=stoneValue[i];
            r-=stoneValue[i];

            if(l<r) ans=max(ans , l+solve(start, i,stoneValue ,dp));
            if(l==r) ans=max(ans, max(l+solve(start,i,stoneValue,dp),r+solve(i+1,end,stoneValue,dp)));
            if(l>r) ans=max(ans, r+solve(i+1,end,stoneValue,dp));

        }
        return dp[start][end]=ans;
    }
    int stoneGameV(vector<int>& stoneValue) {

        int n=stoneValue.size();

        vector<vector<int>>dp(n,vector<int>(n,-1));
         return solve(0, n-1, stoneValue, dp);

        
    }
};