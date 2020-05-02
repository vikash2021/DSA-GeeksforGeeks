#include <bits/stdc++.h> 
using namespace std; 

int numberOfWays(int n) 
{  
    int dp[n + 1], i; 
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    
    for (i = 3; i <= n; i++) 
        dp[i] += dp[i - 3]; 
      
    for (i = 5; i <= n; i++) 
        dp[i] += dp[i - 5]; 
      
    for (i = 10; i <= n; i++) 
        dp[i] += dp[i - 10]; 
  
    return dp[n]; 
} 
  
// Driver Code 
int main() 
{ 
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        cout<<numberOfWays(n)<<"\n";
    }
    
    return 0; 
} 
