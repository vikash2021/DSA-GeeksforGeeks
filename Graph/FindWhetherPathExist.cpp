#include <bits/stdc++.h>
#define MOD 1000000007
#define mk make_pair
#define pb push_back
#define fi first
#define se second
#define endll "\n";
using namespace std;


int issafe(int i1,int j1,int n,vector<vector<int>> vis,vector<vector<int>> a)
{
    if(i1<0||i1>=n||j1<0||j1>=n||a[i1][j1]==0||vis[i1][j1]==1)
    {
        return 0;
    }
    return 1;
}
int dfs(vector<vector<int>> &a,int i1,int j1,int i2,int j2,int n,vector<vector<int>> &vis){
    
    if(i1==i2&&j1==j2)
    {
        return 1;
    }
    vis[i1][j1]=1;
    int ans=0;
    if(issafe(i1+1,j1,n,vis,a))
    {
        ans=max(ans,dfs(a,i1+1,j1,i2,j2,n,vis));
    }
    if(issafe(i1-1,j1,n,vis,a)){
        ans=max(ans,dfs(a,i1-1,j1,i2,j2,n,vis));
    }
    if(issafe(i1,j1+1,n,vis,a)){
        ans=max(ans,dfs(a,i1,j1+1,i2,j2,n,vis));
    }
    if(issafe(i1,j1-1,n,vis,a)){
        ans=max(ans,dfs(a,i1,j1-1,i2,j2,n,vis));
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<int>> a(n,vector<int> (n)),vis(n,vector<int> (n));
        int sx,sy,dx,dy;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                if(a[i][j]==1){
                    sx=i;sy=j;
                }
                if(a[i][j]==2){
                    dx=i;dy=j;
                }
            }
        }
        
        cout<<dfs(a,sx,sy,dx,dy,n,vis)<<endll;
    }
    return 0;
}

/*

*/
