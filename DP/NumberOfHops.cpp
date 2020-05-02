#include <bits/stdc++.h>
using namespace std;
long long countWays(int);
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin>>n;
		cout << countWays(n) << endl;
	}
    return 0;
}

long long countWays(int m){
    
    // your code here
    long long dp[m+1];
    dp[0]=dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=m;i++)
    {
        dp[i]=dp[i-1]%1000000007+dp[i-2]%1000000007+dp[i-3]%1000000007;
    }
    
    return dp[m]%1000000007;
    
}
