bool DFSRec(vector<int> *adj, int s, vector<bool> &visited,vector<bool> &recSt)
{
    visited[s]=true;
    recSt[s]=true;
    for(auto u:adj[s])
    {
        if(visited[u]==false && DFSRec(adj,u,visited,recSt) )
        return true;
        else if(recSt[u]==true)
        return true;
    }
    recSt[s]=false;
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    vector<bool> visited(V, false);
    vector<bool> recSt(V, false);
    
    for(int i=0;i<V;i++)
    {
        if(visited[i]==false)
         if(DFSRec(adj,i,visited,recSt)==true)
         return true;
         
    }
    return false;
}
