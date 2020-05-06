#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m,i,j,k;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        n=s1.length();
        m=s2.length();
        long long dp[n+1][m+1];
        
        for(i=0;i<=n;i++)
            {
                dp[i][0]=i;
            }
            
        for(i=0;i<=m;i++)
                dp[0][i]=i;
                
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else
                    {
                        dp[i][j]=1+min(dp[i-1][j],dp[i][j-1]);
                    }
            }
        }
        cout<<dp[n][m]<<endl; 
        
    }
}
    
