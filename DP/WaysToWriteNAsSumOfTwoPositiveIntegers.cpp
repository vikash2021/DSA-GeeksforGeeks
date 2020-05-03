#include<bits/stdc++.h>


using namespace std;

int countWays(int);

// Driver program
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin>>n;
        cout<<countWays(n)<<endl;
    }
    return 0;
}// } Driver Code Ends
// function to count number of ways in which n can
// be written as sum of two or more than two integers
int countWays(int n)
{
    // your code here
    long long int dp[n+1] = {0};
    dp[0] = 1;
    for( int i = 1 ; i < n ; i++ )
    {
        for( int j = i ; j <= n ; j++ )
          {
            dp[j] += (dp[j-i] % 1000000007) ;
           }
    }
    
    return dp[n]%1000000007;
    
}
