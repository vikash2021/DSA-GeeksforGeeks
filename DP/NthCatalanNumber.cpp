#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int;
using namespace std;

cpp_int numTrees(int n) 
{

        cpp_int dp[n+1];
        dp[0]=dp[1]=1;
        for(int i=2;i<=n;i++)
        {   dp[i]=0;
            for(int j=1;j<=i;j++)
            {
                dp[i]+=(dp[j-1]*dp[i-j]);
            }
        }
        return dp[n];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cpp_int ans = numTrees(n);
        cout << ans << endl;    
    }
}
