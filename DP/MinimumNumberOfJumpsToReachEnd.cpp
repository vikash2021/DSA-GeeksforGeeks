#include<bits/stdc++.h>
using namespace std;

long long int minJump(long long int a[], long long int n)
{
    long long int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++)
            dp[i]=INT_MAX;
            
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]+j>=i)
            {
                if(dp[j]!=INT_MAX)
                dp[i]=min(dp[i],dp[j]+1);
            }
        }
    }
    
    return dp[n-1];
}

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        long long ans=minJump(a,n);
        if(ans==INT_MAX)
        cout<<"-1"<<"\n";
        else
        cout<<ans<<"\n";
        
    }
    return 0;
}
