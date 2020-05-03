#include<bits/stdc++.h>
using namespace std;

void printGraph(vector<int> adj[], int V)
{
    int i,j;
    for(i=0;i<V;i++)
    {   cout << i;
        for(j=0;j<adj[i].size();j++)
        {
            cout << "-> " << adj[i][j];
        }
    
        cout << endl;
    }
} 

int main()
{  
   int t;
   cin>>t;
   while(t--)
    {  int v, e;
       cin>>v>>e;
       int a, b;
       vector<int> adj[v];
       for(int i=0;i<e;i++)
       {
 		    cin>>a>>b;
 		    adj[a].push_back(b);
 		    adj[b].push_back(a);
       }
		printGraph(adj, v);
       
     }
    return 0;
}
