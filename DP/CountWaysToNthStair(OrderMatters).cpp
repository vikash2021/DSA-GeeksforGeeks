#include<bits/stdc++.h>
using namespace std;

long long mod = 1000000007;

long long countWays(int);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        cin>>m;
        cout<<countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}



// function to count ways to reach mth stair
long long countWays(int m){
    long long dp[m+1];
    dp[0]=dp[1]=1;
    for(int i=2;i<=m;i++)
    dp[i]=dp[i-1]%1000000007+dp[i-2]%1000000007;
    
    return dp[m]%1000000007;
    
}
