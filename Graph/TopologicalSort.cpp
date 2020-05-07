void topo(vector<int> adj[], int u, bool visited[], stack<int> &s) 
{
    visited[u] = true; // Mark the current node as visited

    for (auto v : adj[u]) // Run for adjacent vertices
    {
        if (!visited[v]) // If adjacent vertex is not visited
            topo(adj, v, visited,s); // Call the topo function for adjacent vertex
    }
    s.push(u); // Push the current node to the stack
}

int *topoSort(int N, vector<int> adj[]) {
    bool visited[N + 1];                // Make a visited array of N nodes
    memset(visited, 0, sizeof visited); // Mark the visited array intially 0
    stack<int> s;

    for (int i = 0; i < N; i++) // Traverse for all the nodes from 0 to N.
    {
        if (!visited[i])              // If the current node is not visited
            topo(adj, i, visited, s); // Call the topo function
    }

    int *A = new int[s.size()];
    int i = -1;
    while (!s.empty()) // Till stack is not empty
    {
        A[++i] = s.top(); // Put the stack top value to the array
        s.pop();
    }
    return A;
}
