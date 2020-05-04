int longestSubsequence(int n, int a[]){
    
    int dp[n];
    for(int i=0;i<n;i++)
        dp[i]=1;
    
    
    for (int i = 1; i < n; i++) 
        for (int j = 0; j < i; j++) 
            if (a[i] > a[j] && dp[i] < dp[j] + 1) 
                dp[i] = dp[j] + 1; 
  
   int max=0;
    for (int i = 0; i < n; i++) 
        if (max < dp[i]) 
            max = dp[i]; 
  
  
    return max; 
}
