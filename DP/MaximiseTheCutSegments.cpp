int maximizeTheCuts(int n, int x, int y, int z)
{
    //Your code here
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        dp[i]=-1;
        if(i-x>=0)dp[i]=max(dp[i],dp[i-x]);
        if(i-y>=0)dp[i]=max(dp[i],dp[i-y]);
        if(i-z>=0)dp[i]=max(dp[i],dp[i-z]);
        if(dp[i]!=-1)
        dp[i]++;
    }
  
   if(dp[n]==-1)
   return 0;
   else
   return dp[n];
    
}
