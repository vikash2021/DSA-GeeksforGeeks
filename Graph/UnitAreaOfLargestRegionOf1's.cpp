#include <bits/stdc++.h>
using namespace std;

#define SIZE 100


 // } Driver Code Ends


/*  Function to find the area of 1s
*   SIZE: declared globally for matrix definition
*   n, m: row and column of matrix
*   g[][]: 2D matrix from input
*/
int x[8] = {-1,-1,0,1,1,1,0,-1};
int y[8] = {0,1,1,1,0,-1,-1,-1};
bool inrange(int i,int j,int n,int m)
{
    return (i>=0 && j>=0 && i<n && j<m);
}
void dfs(int i,int j,int n,int m,int g[SIZE][SIZE],int &count)
{
    g[i][j]=0;
    count++;
    for(int p=0;p<8;p++)
    {
        if(inrange(i+x[p],j+y[p],n,m) && g[i+x[p]][j+y[p]]==1) 
        {
            dfs(i+x[p],j+y[p],n,m,g,count);
        }
    }
}
int findMaxArea(int n, int m, int g[SIZE][SIZE] )
{
    // Your code here
    int max_ans = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(g[i][j]==1)
            {
                int count = 0;
                dfs(i,j,n,m,g,count);
                max_ans = max(max_ans,count);
                count = 0;
            }
        }
    }
    return max_ans;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int g[SIZE][SIZE];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> g[i][j];

        cout << findMaxArea(n, m, g) << endl;
    }

    return 0;
} 
