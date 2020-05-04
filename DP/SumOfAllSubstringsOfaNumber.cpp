long long sumSubstrings(string s){
    
    long long dp[s.size()];
    dp[0]=int(s[0]-'0');
    long long res=0, p=1000000007;
    res=dp[0];                      // Initially put the 0th position value in dp[0]
    for(int i=1;i<s.length();i++)
    {
        int cur_digit=(int)(s[i]-'0');          // Get the integer value from string
        dp[i]=(((i+1)*(cur_digit))%p+(dp[i-1]*10)%p)%p;   // Get the current digit* (i+1) and add it to dp[i-1]*10 
        res = (res+dp[i])%p;                             // dp[i] at any point of time store the answer for sum if only i digits in string exists
    }
    
    return res;
    
}
