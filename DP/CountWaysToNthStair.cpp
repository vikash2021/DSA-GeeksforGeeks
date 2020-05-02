#include<bits/stdc++.h>
using namespace std;

long long mod =1000000007;

long long countWays(int);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        cin>>m;
        cout<<countWays(m)<<endl; 
    }
    return 0;
}


// function to count ways to reach mth stair
long long countWays(int m){
    
    long long dp[m+1];
    memset(dp,0,sizeof(dp));

    dp[0]=1;

    for(int i=1;i<=m;i++)
    {
        dp[i]+=dp[i-1];
    }
    for(int i=2;i<=m;i++)
    {
        dp[i]+=dp[i-2];
    }
    
    return dp[m];

    
}

//  OR

/*long long countWays(int m){
return(m/2+1;}

OR

long long countWays(int m)
{
long long res[m + 1];
res[0] = 1;
res[1] = 1;
for (int i = 2; i <= m; i++)
res[i] = (res[i-2] + 1);
return res[m];
}*/
